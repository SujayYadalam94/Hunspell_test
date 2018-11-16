all:static static_hugepages dynamic

static:
	gcc hunspell_test.c -L. -lhunspell -I/usr/local/include/hunspell -lstdc++ -o hunspell_static.o

static_hugepages:
	gcc hunspell_test.c -L. -lhunspell -I/usr/local/include/hunspell -lstdc++ -o hunspell_static_huge.o -B /usr/local/share/libhugetlbfs -Wl,--hugetlbfs-align

dynamic:
	gcc hunspell_test.c -L/usr/local/lib -lhunspell-1.6 -I/usr/local/include/hunspell -ggdb -o hunspell_dynamic.o

clean:
	rm -f *.o
