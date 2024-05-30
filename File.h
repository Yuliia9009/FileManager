#ifndef FILE_H
#define FILE_H

#include <string>

class File {
public:
    File(const std::string &path);

    bool copyTo(const std::string &destination) const;
    bool moveTo(const std::string &destination);
    bool remove() const;

    std::string getPath() const;
    std::string getName() const;

private:
    std::string path;
};

#endif 
