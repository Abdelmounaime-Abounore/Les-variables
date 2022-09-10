#include <stdio.h>

int main() {
    float r,P;
    printf("Entrez le rayon: ");
    scanf("%f",&r);
    P = 2 * 3.14 * r;
    printf("La circonférence du cercle est: %.2f",P);
    return 0;
}