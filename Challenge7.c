#include <unistd.h>
#include <stdio.h>

/*
Challenge 7 :
Ecrire un programme C qui calcule le nième terme de la suite de Fibonacci, 
définie comme suit: Un=Un-1+Un-2 où U1=U0=1.
*/

int main(){
    int n;
    int c_2=0; // la case avant deux fois
    int c_1=1; // la case avant une fois
    int c;
    int compt=0;
    printf("Entrez n : ");
    scanf("%d",&n);
    while (compt != n){
        c=c_1+c_2;
        c_2=c_1;
        c_1=c; 
        compt++;
    }
    printf("%d \n",c_2);
return 0;
}