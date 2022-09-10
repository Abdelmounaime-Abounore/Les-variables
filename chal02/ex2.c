#include <stdio.h>
#include <stdlib.h>

int main () {
     float C,F;
     printf("Entrez la temperature en degre Celsius: ");
     scanf("%f",&C);
     F = (C * 1.8) + 32;

     printf("La temperature en fahrenheit est: %.2f", F);

return 0;
}