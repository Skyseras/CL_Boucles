#include <unistd.h>
#include <stdio.h>

/*
Challenge 5:
Ecrire un programme C qui lit un entier et l'affiche inversé. 
On choisira de ne pas afficher chiffre par chiffre mais de construire 
l'entier inversé puis l'afficher.
Ex: si l'entrée est 12345 on doit afficher l'entier 54321.
*/

int main(){
    int n, i=0;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    while (n!=0){
    i=(i*10)+(n%10);
    n=n/10;
    }
    printf("Votre nombre entier a l'inverse est : %d", i);
    return 0;
}