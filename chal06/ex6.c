#include <stdio.h>
#include <stdlib.h>

int main () {
    float F, C;
    printf("Entrez la temperature en Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32) / 1.8;
    printf("La temperature en degre Celsius est : %.2f\n",C);

    return 0;
}