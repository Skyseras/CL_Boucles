#include <unistd.h>
#include <stdio.h>

/*
Challenge 2: pyramide d'étoile
Ecrire le programme pour avoir un pyramide d'étoile, 
le nombre des lignes à composer est demandé à l’utilisateur.
(chaque ligne doit avoir un nombre premier d'étoiles
*/

int is_pr(int nbt){ // nombre test
    int ndiv=0;
    int nb=nbt; // nombre = nombre test
    // exclude 0 and 1
    if(nbt==0 || nbt==1)
        return -1;
    // find prime numbers
    while (nb)
    {
        if (nbt%nb==0)
            ndiv++;
        nb--;
    }
    if (ndiv!=2)
        return 0;
    else
        return 1;
}

int nth_pr(int nbs){
    int compt=0;
    // number of base
    int n=3;
    while (n){
        if (is_pr(n))
            compt++;
        if (compt==nbs)
            return n;
        n++;
    }

}
int main(){
    // code of stars
    int lines;
    int li=1;
    int t=1;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lines);

    // code of spaces
    int k = 0;
    int sp;
    int foo;
    
    while (li<=lines){
        sp = (nth_pr(lines) - nth_pr(li)) / 2;    
        while (k < sp){
            printf(" ");
            k++;
        }
        k = 0;

        while (t <= nth_pr(li)){
            printf("*");
            t++;
        }
        t = 1;
        printf("\n");
        li++;




        

        


    }
    return 0;
}