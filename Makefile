main: print_array.o merge_sort.o

test: main
	./main

clean:
	rm main
	rm *.o
