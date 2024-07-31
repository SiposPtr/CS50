<h1>C language</h1>

basic file:
```
#include <stdio.h>
int main(void) {
    printf("hi");
}
```

to run:<br>
`make <name_of_program_you_want>`
`./<name_of_program_you_want>`


cs50.h library:
- Download the latest release from https://github.com/cs50/libcs50/releases

- Extract libcs50-*.*

- cd libcs50-*

- sudo make install

```
~/Developement/CS50/libcs50-11.0.3 @ main ~ make
cc -Wall -Wextra -Werror -pedantic -std=c11 -fPIC -shared -Wl,-install_name,libcs50-11.0.3.dylib -o libcs50-11.0.3.dylib src/cs50.c
cc -Wall -Wextra -Werror -pedantic -std=c11 -c -o libcs50.o src/cs50.c
ar rcs libcs50.a libcs50.o
chmod 644 libcs50.a
rm -f libcs50.o
ln -sf libcs50-11.0.3.dylib libcs50.dylib
mkdir -p build/include build/lib build/src
install -m 644 src/cs50.c build/src
install -m 644 src/cs50.h build/include
mv libcs50-11.0.3.dylib libcs50.dylib libcs50.a build/lib
cc -Wall -Wextra -Werror -pedantic -std=c11 -fPIC -shared -Wl,-install_name,libcs50-11.0.3.dylib -o libcs50-11.0.3.dylib src/cs50.c
cc -Wall -Wextra -Werror -pedantic -std=c11 -c -o libcs50.o src/cs50.c
ar rcs libcs50.a libcs50.o
chmod 644 libcs50.a
rm -f libcs50.o
ln -sf libcs50-11.0.3.dylib libcs50.dylib
mkdir -p build/include build/lib build/src
install -m 644 src/cs50.c build/src
install -m 644 src/cs50.h build/include
mv libcs50-11.0.3.dylib libcs50.dylib libcs50.a build/lib
~/Developement/CS50/libcs50-11.0.3 @ main ~ find . -name "*.dylib"
./build/lib/libcs50.dylib
./build/lib/libcs50-11.0.3.dylib
~/Developement/CS50/libcs50-11.0.3 @ main ~ cp ./build/lib/libcs50-11.0.3.dylib /Users/sipospeter/Developement/CS50 
~/Developement/CS50/libcs50-11.0.3 @ main ~ export DYLD_LIBRARY_PATH=/Users/sipospeter/Developement/CS50:$DYLD_LIBRARY_PATH
~/Developement/CS50/libcs50-11.0.3 @ main ~ gcc -o first first.c -L /Users/sipospeter/Developement/CS50 -lcs50 -Wl,-rpath,/Users/sipospeter/Developement/CS50
clang: error: no such file or directory: 'first.c'
~/Developement/CS50/libcs50-11.0.3 @ main ~ gcc -o first first.c -L /Users/sipospeter/Developement/CS50 -lcs50 -Wl,-rpath,/Users/sipospeter/Developement/CS50 
clang: error: no such file or directory: 'first.c'
~/Developement/CS50/libcs50-11.0.3 @ main ~ ls
LICENSE         Makefile        README.md       build           docs            post            postinst        postrm          postun          src             tests
~/Developement/CS50/libcs50-11.0.3 @ main ~ cd ..
~/Developement/CS50 @ main ~ gcc -o first first.c -L /Users/sipospeter/Developement/CS50 -lcs50 -Wl,-rpath,/Users/sipospeter/Developement/CS50
~/Developement/CS50 @ main ~ ./first
```
