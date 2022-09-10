#include <stdio.h>
#include <stdlib.h>

int main () {
    float F, C;
    printf("Entrez la temperature en Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32) / 1.8;
    printf("La temperature en degre Celsius est : %.2f\n",C);
    if (C <= -7)
    printf("tres froid!");
    else if (C > -7 && C <= 13)
    printf("froid!");
    else if (C > 13 && C <= 28)
    printf("chaud");
    else 
    printf("tres chaud");


return 0;
}
