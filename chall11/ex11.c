#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float longueur, largeur, P;
    printf("entrez la longueur: ");
    scanf("%f", &longueur);
    printf("entrez la largeur: ");
    scanf("%f", &largeur);
    P = 2 * (longueur + largeur);
    printf (" la circonférence du rectangle est: %.f", P);
    

    return 0;
}