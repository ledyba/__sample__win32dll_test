
all: test.dll test.exe

LDFLAGS=-lmodplug
CFLAGS=-I/d/software/dev/applib/ff

test.dll: dll.o
	g++ -o test.dll -shared dll.o ${LDFLAGS}

test.exe: main.o
	g++ -o test.exe main.o ${LDFLAGS}

dll.o: dll.cpp
main.o: main.c

clean:
	rm -f *.exe
	rm -f *.dll
	rm -f *.o

.cpp.o:
	g++ -c -o $@ $< ${CFLAGS}

.c.o:
	g++ -c -o $@ $< ${CFLAGS}
