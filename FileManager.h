#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "File.h"
#include "Directory.h"
#include <string>
#include <vector>
#include <thread>

class FileManager {
public:
    void copyFile(const std::string &source, const std::string &destination);
    void moveFile(const std::string &source, const std::string &destination);
    void deleteFile(const std::string &path);

    void displayDirectoryContents(const std::string &path) const;
};

#endif // FILEMANAGER_H
