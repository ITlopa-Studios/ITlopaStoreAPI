gcc -I inc -shared -fPIC -o build/libitstore.so itstore.c
gcc -I inc -c itstore.c -o itstore.o
ar rcs libitstore.a itstore.o
