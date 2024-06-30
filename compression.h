#ifndef COMPRESSION_H
#define COMPRESSION_H

class Compression {
    public:
        // TODO -- these will likely have to take in and return streams
        virtual void compress() = 0;
        virtual void decompress() = 0;
};

#endif