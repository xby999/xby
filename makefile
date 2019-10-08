test1:main.o qsort.o mysort.o
		gcc main.o qsort.o mysort.o -o test1
main.o:main.c
		gcc main.c -c
qsort.o:qsort.c
		gcc qsort.c -c
mysort.o:mysort.c
		gcc mysort.c -c
clean:
		rm -f *.o
