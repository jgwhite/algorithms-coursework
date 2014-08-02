main: print_array.o merge_sort.o

clean:
	rm -f main
	rm -f *.o

rebuild: clean main

test: rebuild
	./main
