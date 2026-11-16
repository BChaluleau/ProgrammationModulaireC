# on définit la cible main.exe: dépendances
main.exe: main.o somme.o serie.o
	# makefile sont structurés par tabulation
	gcc -Wall main.o somme.o serie.o -o main.exe

main.o: main.c somme.h serie.h
	gcc -Wall -c main.c 

somme.o: somme.c somme.h
	gcc -Wall -c somme.c

serie.o: serie.c somme.h serie.h
	gcc -Wall -c serie.c 

clean:
	rm *.o *.exe

launch: main.exe
	./main.exe