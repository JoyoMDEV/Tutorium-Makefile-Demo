# Variablen definieren
CC = gcc
CFLAGS = -Wall -g

# Default Target (wird bei 'make' ohne Argument ausgefuehrt)
main: main.o utils.o mathe.o
	$(CC) -o main main.o utils.o mathe.o

# Kompilierregeln fuer Object-Dateien
main.o: main.c utils.h mathe.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

mathe.o: mathe.c mathe.h
	$(CC) $(CFLAGS) -c mathe.c

# Aufraeumen
clean:
	rm -f main *.o

# Phony Targets (sind keine echten Dateien)
.PHONY: clean