#include <unistd.h>
#include <stdio.h>

/*
Challenge 3 :
Ecrire un programme C qui lit un entier puis détermine s'il est premier ou non.
On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même.
Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.
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
    int a;
    printf("entrer n : ");
    scanf("%d",&a);
    int res=is_pr(a);
    if (res==0)
        printf("le nombre n'est pas premier.");
    else if(res==1)
        printf("le nombre est premier.");
    else if(res==-1){
        printf("le nombre est null.");
        }
    else if(res==-2){
        printf("1 n'est pas premier parceque par definition, un nombre premier ne peut pas etre egal à 1.");
        }
    return 0;
}
