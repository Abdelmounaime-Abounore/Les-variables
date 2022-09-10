#include <stdio.h>
#include <stdlib.h>

int main () {
    float distance_mettre, distance_mile;
     printf("Entrez la distance en mile: ");
     scanf("%f", &distance_mile);
     
     distance_mettre = distance_mile * 1000 * 1.609;      
     printf("La distance en mettre est: %.2f", distance_mettre);

return 0;
}
