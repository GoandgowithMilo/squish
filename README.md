This project is just for fun to do some c++ OOP and learn a bit about compression.

This is a good resource for text to compress - https://www.gutenberg.org/browse/scores/top#books-last1

Current: do a bit of reading on compression algorithms

ToDo:
- create a makefile for the project
- do some research on compression algorithms - seems like this might be a good place to start https://en.wikipedia.org/wiki/Lempel%E2%80%93Ziv%E2%80%93Welch
- set it up to prompt user for input and 
- write a shell script for testing it (read input from a file, write to another file, do a diff on both)

Bugs:
- weird bug when diffing the file after reading and writing it. The file is actually the same and if I open it and save the diff dissapears but before that it thinks everything is different. Might have something to do with autosave?

Extensions:
- Read all the files in a folder --> compress them 1 by 1 --> write the compressed files to another folder
- Download all the content from a website and compress it
