#include "somme.h"

#include <stdio.h>  // printf

static void privee(void) {
    printf("Je suis une fonction privée\n");
}

int somme(int a, int b) {
    printf("somme(%d, %d) ---> %d\n", a, b, a + b);
    privee();
    return a + b;
}

// gcc -Wall -c somme.c --> somme.o