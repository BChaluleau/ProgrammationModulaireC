#include <stdio.h>  // printf

// ce n'est pas le main qui fait les déclarations
// extern int somme(int, int);
#include "somme.h"

int main(void) {
    printf("Dans le main...\n");
    int x = 2;
    int y = 3;
    int r = somme(x, y);
    printf("%d + %d = %d\n", x, y, r);
    return 0;
}

// gcc -Wall -c main.c --> main.o