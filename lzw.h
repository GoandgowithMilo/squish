#ifndef LZW_H
#define LZW_H

#include <iostream>
#include "compression.h"

class Lzw : public Compression {
    public:
        void compress();

        void decompress();
};

#endif