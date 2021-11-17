#include <unistd.h>
#include <stdio.h>

/*
Challenge 4 :
Ecrire un programme C qui lit une série d'entiers positifs inférieurs à 
100 terminée par 0. Et qui doit négliger toute entrée strictement supérieure à 100. 
Puis calcule et affiche la somme et le max des éléments de cette série.
*/

int main(){
    int n;
    int somme=0;
    int max=0;
    while (1)
    {
        printf("Entrez un nombre entier entre 0 et 100 : ");
        scanf("%d",&n);
        if (n<=100 && n>0){
        somme = n + somme;
            if (max-n<0)
            max=n;
        }
        else if (n==0){
        break;
        } 
    }
    printf("La somme des nombres saisis est : %d\n",somme);
    printf("Le nombre max saisis est : %d\n",max);
    return 0;
}