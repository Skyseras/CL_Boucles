#include <unistd.h>
#include <stdio.h>

/*
Challenge 10 :
Ecrivez un programme en C pour calculer la somme du maximum de 10 nombres 
en ignorant les nombres négatifs du calcul.
*/

int main(){ 
    int n;
    int m=1;
    int somme=0;
    while (m<=10){
        printf("Entrez le nombre %d\n",m);
        scanf("%d", &n);
        if (n>0)
            somme+=n;
        m++;
    }
    printf("La somme des nombres entres non negatifs est : %d\n",somme);
return 0;
}