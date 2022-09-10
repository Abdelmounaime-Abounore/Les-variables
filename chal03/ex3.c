#include <stdio.h>
#include <stdlib.h>

int main () {
    float distance_mettre;
     printf("Entrez la distance en mettre: ");
     scanf("%f",&distance_mettre);
     
     distance_mettre /= 1609.334;      
     printf("La distance en mile est: %f", distance_mettre);

return 0;
}
