#include <unistd.h>
#include <stdio.h>

/*
Challenge 9 :
Ecrivez un programme c pour trouver la puissance d'un nombre en utilisant 
des boucles while. Le nombre de la base (>0) et l'exposant (>=0) sont pris dans les cas de test.
*/

int main(){
    float b;
    int p;
    printf("Entrez le nombre de base : ");
    scanf("%f",&b);
    printf("Entrez le nombre de puissance : ");
    scanf("%d",&p);
    float res = b;
    if (p==0)
        printf("Le resultat est : 1");
        else if (p>0)
        {
            while ( p > 1 ){
            res *= b;
            p--;
            }
            printf("Le resultat est : %f", res);
        }
    return 0;
}