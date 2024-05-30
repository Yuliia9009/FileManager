#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <string>
#include <vector>
#include "File.h"

class Directory {
public:
    Directory(const std::string &path);

    std::vector<File> getFiles() const;
    std::vector<Directory> getDirectories() const;

    std::string getPath() const;
    std::string getName() const;

private:
    std::string path;
};

#endif // DIRECTORY_H
