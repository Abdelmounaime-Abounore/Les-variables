#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int n, invers;
    invers = 0;
    printf("entrez le nombre n: ");
    scanf("%d", &n);
    invers = (invers * 10) + (n % 10);
    n = n / 10; // 24
    invers = (invers * 10) + (n % 10); 
    n = n / 10; // 2
    invers = (invers * 10) + (n % 10); 
    printf("L'inverse de n est: %d",invers);


    return 0;
}