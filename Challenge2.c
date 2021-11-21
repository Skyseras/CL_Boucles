#include <unistd.h>
#include <stdio.h>

/*
Challenge 2: pyramide d'étoile
Ecrire le programme pour avoir un pyramide d'étoile, 
le nombre des lignes à composer est demandé à l’utilisateur.
(chaque ligne doit avoir un nombre premier d'étoiles
*/


//Function : prime or not

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

// function : gathering of prime numbers

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
        // code of spaces to make a piramyd
        int i = 0;
        int space;   
    while (li<=lines){
        space = (nth_pr(lines) - nth_pr(li)) / 2;    
        while (i < space){
            printf(" ");
            i++;
        }
        i = 0;
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