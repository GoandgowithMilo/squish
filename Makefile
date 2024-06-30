CC=clang++

main: main.cpp lzw.h file_manager.h lzw.o file_manager.o
	$(CC) -o main main.cpp lzw.o file_manager.o

lzw.o: lzw.cpp lzw.h
	$(CC) -c lzw.cpp

file_manager.o: file_manager.cpp file_manager.h
	$(CC) -c file_manager.cpp

run:
	./main sdfds

clean:
	rm -f main lzw.o file_manager.o
	rm -f ./TestCompressedFiles/*