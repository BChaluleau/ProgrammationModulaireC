#include "somme.h"

#include <stdio.h>  // printf

struct sResultat {
    int resultat;
    int OK;
};

static void privee(void) {
    printf("Je suis une fonction privée\n");
}

int somme(int a, int b) {
    printf("somme(%d, %d) ---> %d\n", a, b, a + b);
    privee();
    return a + b;
}

tResultat creeUnTruc() {
    return NULL;
}

// gcc -Wall -c somme.c --> somme.o