# variable VAR=truc s'utilisent avec la syntaxe $(VAR)
CC=gcc
CFLAGS=-Wall -Werror
RM=rm
EXE=main.exe
OBJ=main.o somme.o serie.o

# on définit la cible main.exe: dépendances
$(EXE): $(OBJ)
	# makefile sont structurés par tabulation
	$(CC) $(CFLAGS) $(OBJ) -o $(EXE)

main.o: main.c somme.h serie.h
	$(CC) $(CFLAGS) -c main.c 

somme.o: somme.c somme.h
	$(CC) $(CFLAGS) -c somme.c

serie.o: serie.c somme.h serie.h
	$(CC) $(CFLAGS) -c serie.c 

clean:
	$(RM) *.o *.exe

launch: $(EXE)
	./$(EXE)