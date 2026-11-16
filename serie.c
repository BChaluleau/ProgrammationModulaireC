#include <stdio.h>

#include "somme.h"

void serie(int n) {
    int r = 0;
    for (int i = 0; i < n; i++) {
        r = somme(r, i);
    }
    printf("serie ==> %d\n", r);
}