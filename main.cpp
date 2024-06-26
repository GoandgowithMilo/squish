#include "file_manager.h"
#include "lzw.h"

int main(int argc, char *argv[]) {
    FileManager fm;

    fm.openFile("./TestFiles/HelloWorld.txt");
    fm.writeContents();

    testPrint();

    return 0;
}