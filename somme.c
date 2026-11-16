#include "somme.h"

#include <stdio.h>  // printf

int somme(int a, int b) {
    printf("somme(%d, %d) ---> %d\n", a, b, a + b);
    return a + b;
}

// gcc -Wall -c somme.c --> somme.o