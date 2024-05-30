#include "Console.h"
#include <iostream>
#include <sstream>

void Console::start() {
    std::string input;
    while (true) {
        printMenu();
        std::getline(std::cin, input);
        handleUserInput(input);
    }
}

void Console::printMenu() const {
    std::cout << "\nFile Manager Menu:\n"
              << "1. Copy File\n"
              << "2. Move File\n"
              << "3. Delete File\n"
              << "4. Display Directory Contents\n"
              << "5. Exit\n"
              << "Enter choice: ";
}

void Console::handleUserInput(const std::string &input) {
    std::istringstream iss(input);
    int choice;
    iss >> choice;

    std::string source, destination, path;
    switch (choice) {
        case 1:
            std::cout << "Enter source file path: ";
            std::cin >> source;
            std::cout << "Enter destination file path: ";
            std::cin >> destination;
            fileManager.copyFile(source, destination);
            break;
        case 2:
            std::cout << "Enter source file path: ";
            std::cin >> source;
            std::cout << "Enter destination file path: ";
            std::cin >> destination;
            fileManager.moveFile(source, destination);
            break;
        case 3:
            std::cout << "Enter file path to delete: ";
            std::cin >> path;
            fileManager.deleteFile(path);
            break;
        case 4:
            std::cout << "Enter directory path: ";
            std::cin >> path;
            fileManager.displayDirectoryContents(path);
            break;
        case 5:
            std::cout << "Exiting..." << std::endl;
            exit(0);
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
