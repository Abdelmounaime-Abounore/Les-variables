#include <stdio.h>
#include <stdlib.h>

int main () {
    float a, b, c, d, somme, moyen;
    printf("entrez la valeure de a: ");
    scanf("%f", &a);
    printf("entrez la valeure de b: ");
    scanf("%f", &b);
    printf("entrez la valeure de c: ");
    scanf("%f", &c);
    printf("entrez la valeure de d: ");
    scanf("%f", &d);
    somme = a + b + c + d;
    moyen = somme / 4;
    printf("la somme est : %.2f\n", somme);
    printf("la moyen est: %.2f", moyen);

    return 0;
}

