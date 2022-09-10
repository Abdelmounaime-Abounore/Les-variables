// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   char nom[20], prenom[20], num_tel[20], sexe[10];
   int age;
   printf("Entrez votre nom: ");
   scanf("%s", &nom);
   printf("Entrez votre prenom: ");
   scanf("%s", &prenom);
   printf("Entrez votre numero de telephone: ");
   scanf("%s", &num_tel);
   printf("Entrez votre sexe: ");
   scanf("%s", &sexe);
   printf("Entrez votre age: ");
   scanf("%d", &age);
   printf("votre nom: %s\nvotre prenom: %s\nvotre numero de telefone est: %s\nvotre sexe est %s\nvotre age est: %d",nom ,prenom, num_tel,sexe, age);
   

    return 0;
}