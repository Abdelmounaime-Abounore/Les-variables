#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    intptr_t n;
    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);
    printf("l'equivalent de n en octal est: %o\n",n);
    printf("l'equivalent de n en hexadecimal est: %x",n);

    return 0;
}