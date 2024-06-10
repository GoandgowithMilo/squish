// reads a file in 
// writes a file

#include "file_manager.h"

void FileManager::openFile(std::string path) {
    this->fileName = path;
    this->file.open(path);
}

void FileManager::readContents() {
    std::string line;

    while (std::getline(this->file, line)) {
        std::cout << line << std::endl;
    }
}

void FileManager::writeContents() {
    // create the path for the new file and open it
    std::string directory = "./TestCompressedFiles/";
    std::string filePath = this->fileName.substr(fileName.find_last_of("/\\") + 1);
    std::ofstream newFile(directory.append(filePath));

    // write the contents to a new file and close it
    std::string line;
    while (std::getline(this->file, line)) {
        newFile << line;
    }

    newFile.close();
}
