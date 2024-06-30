This project is just for fun to do some c++ OOP and learn a bit about compression.

This is a good resource for text to compress - https://www.gutenberg.org/browse/scores/top#books-last1

Notes:
- Been spending a bunch of time trying to understand how the decompression works for LZW
- Would be good to get some structure setup for this system (can use some of the design patterns I learned in OOP)

Design:
- Have a controller object that has compress, decompress and all the file managemnt 
- Implement specific compression algorithms as subclasses of a compression object that lives in the controller
- When the controller wants to compress something it calls its compress object and that routes to somethign else
- We can then attach different compression types to the controller
- How is file management handled? Does it store an input/output stream?

- do some research on compression algorithms - seems like this might be a good place to start https://en.wikipedia.org/wiki/Lempel%E2%80%93Ziv%E2%80%93Welch
- set it up to prompt user for input and 
- write a shell script for testing it (read input from a file, write to another file, do a diff on both)

Bugs:
- weird bug when diffing the file after reading and writing it. The file is actually the same and if I open it and save the diff dissapears but before that it thinks everything is different. Might have something to do with autosave?

Extensions:
- Read all the files in a folder --> compress them 1 by 1 --> write the compressed files to another folder
- Download all the content from a website and compress it
- Install this as a utility that you can run from the command line and add this as a package to a repo so people can download it

References:
- https://www.geeksforgeeks.org/lzw-lempel-ziv-welch-compression-technique/
- https://www.cs.cmu.edu/~cil/lzw.and.gif.txt
- https://marknelson.us/posts/2011/11/08/lzw-revisited.html
- https://en.wikipedia.org/wiki/Huffman_coding
- https://en.wikipedia.org/wiki/Lempel%E2%80%93Ziv%E2%80%93Welch
