#include <unistd.h>
#include <stdio.h>

/*
Challenge 2: pyramide d'étoile
Ecrire le programme pour avoir un pyramide d'étoile, 
le nombre des lignes à composer est demandé à l’utilisateur.
(chaque ligne doit avoir un nombre premier d'étoiles
*/

int is_pr(int nbtest){
    int ndiv=0;
    int nbnext=nbtest;
    // exclude 0 and 1
    if(nbtest==0 || nbtest==1)
        return -1;
    // find prime numbers
    while (nbnext)
    {
        if (nbtest%nbnext==0)
            ndiv++;
        nbnext--;
    }
    if (div!=2)
        return 0;
    else
        return 1;
}

int nth_pr(int nbs){
    int compt=0;
    // number of base
    int n=2;
    while (n){
        if (is_pr(n))
            compt++;
        if (compt==nbs)
            return n;
        n++;
    }

}
int main(){
    int Lines;
    int li;
    int t;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", Lines);

    while (li <= nth_prime(t)){
            printf("*");
            li++;
        }
        
        li = 1;
        printf("\n");
        t++;
    return 0;
}