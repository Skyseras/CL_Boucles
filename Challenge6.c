#include <unistd.h>
#include <stdio.h>

/*
Challenge 6 :
Dans cet exercice on va procéder de la manière suivante: 
on parcourt avec une boucle for de compteur p, les entiers entre 2 et n, 
n étant le nombre entré par l’utilisateur (ligne 9). Et, à chaque fois 
on fait un test de primalité sur p (lignes 11-15), s'il s’avère qu’il est 
premier on l'affiche sur le champ.
*/

int is_pr(int nb){
    int div=0;
    int nb2=nb;
    if(nb==0)
        return -1;
    if(nb==1)
        return -2;
    while (nb2)
    {
        if (nb%nb2==0)
            div++;
        nb2--;
    }
    if (div!=2)
        return 0;
    else
        return 1;
}
int main(){
    int m;
    printf("Entrez le plafond des nombres premiers que vous souhaitez savoir: ");
    scanf("%d",&m);
    for (int p=2 ; p<=m ; p++) {
        if (is_pr(p)) {
            printf("%d ",p);
        }
    }
return 0;
}