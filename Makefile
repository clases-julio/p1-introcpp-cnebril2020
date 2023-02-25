CC = g++ # compilador que vas a usar
CFLAGS = -Wall -g # avisos y warnings
.RECIPEPREFIX = > # indicas donde empieza la orden


ejercicio1: ejercicio1.cpp
>$(CC) $(CFLAGS) -c ejercicio1.cpp
>$(CC) $(CFLAGS) -o ejercicio1 ejercicio1.o
>./ejercicio1
>rm *.o ejercicio1

ejercicio2a: ejercicio2a.cpp
>$(CC) $(CFLAGS) -c ejercicio2a.cpp
>$(CC) $(CFLAGS) -o ejercicio2a ejercicio2a.o
>./ejercicio2a
>rm *.o ejercicio2a

ejercicio2b: ejercicio2b.cpp
>$(CC) $(CFLAGS) -c ejercicio2b.cpp
>$(CC) $(CFLAGS) -o ejercicio2b ejercicio2b.o
>./ejercicio2b
>rm *.o ejercicio2b

ejercicio2c: ejercicio2c.cpp
>$(CC) $(CFLAGS) -c ejercicio2c.cpp
>$(CC) $(CFLAGS) -o ejercicio2c ejercicio2c.o
>./ejercicio2c
>rm *.o ejercicio2c

ejercicio3: ejercicio3.cpp
>$(CC) $(CFLAGS) -c ejercicio3.cpp
>$(CC) $(CFLAGS) -o ejercicio3 ejercicio3.o
>./ejercicio3
>rm *.o ejercicio3

ejercicio4: ejercicio4.cpp
>$(CC) $(CFLAGS) -c ejercicio4.cpp
>$(CC) $(CFLAGS) -o ejercicio4 ejercicio4.o
>./ejercicio4
>rm *.o ejercicio4

ejercicio5: ejercicio5.cpp
>$(CC) $(CFLAGS) -c ejercicio5.cpp
>$(CC) $(CFLAGS) -o ejercicio5 ejercicio5.o
>./ejercicio5
>rm *.o ejercicio5

ejercicio6: ejercicio6.cpp
>$(CC) $(CFLAGS) -c ejercicio6.cpp
>$(CC) $(CFLAGS) -o ejercicio6 ejercicio6.o
>./ejercicio6
>rm *.o ejercicio6

ejercicio7: ejercicio7.cpp
>$(CC) $(CFLAGS) -c ejercicio7.cpp
>$(CC) $(CFLAGS) -o ejercicio7 ejercicio7.o
>./ejercicio7
>rm *.o ejercicio7

ejercicio8a: ejercicio8a.cpp
>$(CC) $(CFLAGS) -c ejercicio8a.cpp
>$(CC) $(CFLAGS) -o ejercicio8a ejercicio8a.o
>./ejercicio8a
>rm *.o ejercicio8a

ejercicio8b: ejercicio8b.cpp
>$(CC) $(CFLAGS) -c ejercicio8b.cpp
>$(CC) $(CFLAGS) -o ejercicio8b ejercicio8b.o
>./ejercicio8b
>rm *.o ejercicio8b

ejercicio8c: ejercicio8c.cpp
>$(CC) $(CFLAGS) -c ejercicio8c.cpp
>$(CC) $(CFLAGS) -o ejercicio8c ejercicio8c.o
>./ejercicio8c
>rm *.o ejercicio8c

ejercicio9: ejercicio9.cpp
>$(CC) $(CFLAGS) -c ejercicio9.cpp
>$(CC) $(CFLAGS) -o ejercicio9 ejercicio9.o
>./ejercicio9
>rm *.o ejercicio9

ejercicio10: ejercicio10.cpp
>$(CC) $(CFLAGS) -c ejercicio10.cpp
>$(CC) $(CFLAGS) -o ejercicio10 ejercicio10.cpp
>./ejercicio10
>rm *.o ejercicio10

all: 
>make ejercicio*







