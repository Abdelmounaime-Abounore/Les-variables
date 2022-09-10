#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float Xa, Ya, Xb, Yb, distance;
    printf("Entrez x de a: ");
    scanf("%f", &Xa);
    printf("Entrez y de a: ");
    scanf("%f", &Ya);
    printf("Entrez x de b: ");
    scanf("%f", &Xb);
    printf("Entrez y de b: ");
    scanf("%f", &Yb);
    distance = sqrt(pow((Xb - Xa),2) + pow((Yb - Ya),2));
    printf("la distance entre a et b est %.2f",distance);
    

    return 0;
}