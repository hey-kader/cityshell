CC=cc
make: main.c
	${CC} main.c -c main.o

make city: main.o
	${CC} main.o -o city

make: city 
	mkdir -p /tmp/bin
	ln city /tmp/bin/city	

clean:
	rm *.o city /tmp/bin/city
