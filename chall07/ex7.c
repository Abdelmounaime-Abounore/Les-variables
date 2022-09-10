#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b;
    float somme, soustraction, multiplication, division, modulo;
    printf("entrez la valeur de a: ");
    scanf("%d",&a);
    printf("entrez la valeur de b: ");
    scanf("%d",&b);
    
    somme = a + b;
    soustraction = a - b;
    multiplication = a * b;
    division = a / b;
    modulo = a % b;

    printf("la somme est : %.2f\n",somme);
    printf("la soustraction est : %.2f\n",soustraction);
    printf("la multiplication est : %.2f\n",multiplication);
    printf("la division est : %.2f\n",division);
    printf("le modulo est : %.2f\n",modulo);
    return 0;
}