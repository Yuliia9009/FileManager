#include "FileManager.h"
#include <iostream>
#include <filesystem>

namespace fs = std::__fs::filesystem;

void FileManager::copyFile(const std::string &source, const std::string &destination) {
    std::thread([source, destination]() {
        File file(source);
        if (file.copyTo(destination)) {
            std::cout << "Copied " << source << " to " << destination << std::endl;
        }
    }).detach();
}

void FileManager::moveFile(const std::string &source, const std::string &destination) {
    std::thread([source, destination]() {
        File file(source);
        if (file.moveTo(destination)) {
            std::cout << "Moved " << source << " to " << destination << std::endl;
        }
    }).detach();
}

void FileManager::deleteFile(const std::string &path) {
    std::thread([path]() {
        File file(path);
        if (file.remove()) {
            std::cout << "Deleted " << path << std::endl;
        }
    }).detach();
}

void FileManager::displayDirectoryContents(const std::string &path) const {
    if (!fs::is_directory(path)) {
        std::cerr << "Error: " << path << " is not a directory." << std::endl;
        return;
    }

    Directory dir(path);
    std::cout << "Contents of " << path << ":" << std::endl;
    for (const auto &file : dir.getFiles()) {
        std::cout << "File: " << file.getName() << std::endl;
    }
    for (const auto &directory : dir.getDirectories()) {
        std::cout << "Directory: " << directory.getName() << std::endl;
    }
}
