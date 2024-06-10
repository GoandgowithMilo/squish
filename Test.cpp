#include "FileManager.h"
#include <iostream>

int main(int argc, char* argv[]) {
    FileManager fm;

    fm.openFile("./TestFiles/AliceInWonderland.txt");
    fm.writeContents();
}
