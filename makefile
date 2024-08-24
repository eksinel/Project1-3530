# Complete the following makefile to compile the program and generate the
# executable file main.

main: main.o sort.o
	g++ -o $@ $^

clean:
	rm -rf *.o *.csv main
