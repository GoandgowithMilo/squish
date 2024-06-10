#ifndef FILEMANAGER_H
# define FILEMANAGER_H

#include <fstream>
#include <iostream>
#include <string>

class FileManager {
    private:
        std::ifstream file;
        std::string fileName;

    public:
        void openFile(std::string path);
        void readContents();
        void writeContents();

};

#endif
