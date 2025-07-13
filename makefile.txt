
out: main.o add_book.o list_book.o count_book.o take_book.o sort_book.o find_book.o file_operations.o
	cc main.o add_book.o list_book.o count_book.o take_book.o sort_book.o find_book.o file_operations.o -o out

main.o: main.c
	cc -c main.c

add_book.o: add_book.c
	cc -c add_book.c

list_book.o: list_book.c
	cc -c list_book.c

count_book.o: count_book.c
	cc -c count_book.c

take_book.o: take_book.c
	cc -c take_book.c

sort_book.o: sort_book.c
	cc -c sort_book.c

find_book.o: find_book.c
	cc -c find_book.c

file_operations.o: file_operations.c
	cc -c file_operations.c

clean:
	rm -f *.o out

