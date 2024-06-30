#include "file_manager.h"
#include "lzw.h"

int main(int argc, char *argv[]) {

    Lzw lzw;
    lzw.compress();
    lzw.decompress();

    return 0;
}

