#include "File.h"
#include <iostream>
#include <filesystem>

namespace fs = std::__fs::filesystem;

File::File(const std::string &path) : path(path) {}

bool File::copyTo(const std::string &destination) const {
    try {
        fs::copy(path, destination, fs::copy_options::overwrite_existing);
        return true;
    } catch (fs::filesystem_error &e) {
        std::cerr << "Copy failed: " << e.what() << std::endl;
        return false;
    }
}

bool File::moveTo(const std::string &destination) {
    try {
        fs::rename(path, destination);
        return true;
    } catch (fs::filesystem_error &e) {
        std::cerr << "Move failed: " << e.what() << std::endl;
        return false;
    }
}

bool File::remove() const {
    try {
        fs::remove(path);
        return true;
    } catch (fs::filesystem_error &e) {
        std::cerr << "Remove failed: " << e.what() << std::endl;
        return false;
    }
}

std::string File::getPath() const {
    return path;
}

std::string File::getName() const {
    return fs::path(path).filename().string();
}
