# manually set the LD_LIBRARY_PATH. we could also export LD_LIBRARY_PATH but its weird to do in makefiles
install:
	gcc -c -Wall -Werror -fpic libmath.c
	gcc -shared -o libmath.so libmath.o
	gcc -L/home/steven/linux-review/shared-library -Wall -o program main.c -lmath
	LD_LIBRARY_PATH=/home/steven/linux-review/shared-library ./program


# use rpath during compilation so we don't have to remember to change th LD_LIBRARY_PATH
noinstall:
	gcc -c -Wall -Werror -fpic libmath.c
	gcc -shared -o libmath.so libmath.o
	gcc -L/home/steven/linux-review/shared-library -Wl,-rpath=/home/steven/linux-review/shared-library -Wall -o program main.c -lmath
	./program

# throw the library in /usr/lib and reload the library cache
fullinstall:
	gcc -c -Wall -Werror -fpic libmath.c
	gcc -shared -o libmath.so libmath.o
	chmod 0755 libmath.so
	cp /home/steven/linux-review/shared-library/libmath.so /usr/lib
	chmod 0755 /usr/lib/libmath.so
	ldconfig
	gcc -Wall -o program main.c -lmath
	./program



clean:
	unset LD_LIBRARY_PATH
	rm -f libmath.o
	rm -f libmath.so
	rm -f program
	rm -f /usr/lib/libmath.so
