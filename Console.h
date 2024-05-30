#ifndef CONSOLE_H
#define CONSOLE_H

#include "FileManager.h"
#include <string>

class Console {
public:
    void start();

private:
    FileManager fileManager;

    void printMenu() const;
    void handleUserInput(const std::string &input);
};

#endif // CONSOLE_H
