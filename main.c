#include <stdio.h>  // printf

// fonction qui va appartenir à une bibliothèque
int somme(int a, int b) {
    return a + b;
}

int main(void) {
    printf("Dans le main...\n");
    int x = 2;
    int y = 3;
    int r = somme(x, y);
    printf("%d + %d = %d\n", x, y, r);
    return 0;
}
