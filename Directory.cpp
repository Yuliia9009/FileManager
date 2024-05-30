#include "Directory.h"
#include <filesystem>

namespace fs = std::__fs::filesystem;

Directory::Directory(const std::string &path) : path(path) {}

std::vector<File> Directory::getFiles() const {
    std::vector<File> files;
    for (const auto &entry : fs::directory_iterator(path)) {
        if (fs::is_regular_file(entry.status())) {
            files.emplace_back(entry.path().string());
        }
    }
    return files;
}

std::vector<Directory> Directory::getDirectories() const {
    std::vector<Directory> directories;
    for (const auto &entry : fs::directory_iterator(path)) {
        if (fs::is_directory(entry.status())) {
            directories.emplace_back(entry.path().string());
        }
    }
    return directories;
}

std::string Directory::getPath() const {
    return path;
}

std::string Directory::getName() const {
    return fs::path(path).filename().string();
}
