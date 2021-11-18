#include <unistd.h>
#include <stdio.h>
#include <math.h>

/*
Challenge 8 :
Ecrire un programme C qui utilise le principe de dichotomie 
pour trouver la solution de l'équation x3+12x2+1=0 dans l'intervalle [-15,-10] 
avec une précision de 0,00001.
*/

float f(float x){
    return pow(x , 3) + (12 * pow(x, 2)) + 1;
}

float interval_en_deux(float a, float b){
    return (a + b)/2;
}

int interval_de_fx(float fa, float fb){
    if (fa * fb < 0)
        return 1; // si l'interval contient f(x) = 0
    else
        return 0; // sinon
}

int main(){
    float a,b,m;
    a = -15;
    b = -10;
    m = interval_en_deux(a, b);
    while (1) {
        if (interval_de_fx(f(a), f(m)))
            b = m;
        else
            a = m;
        m = interval_en_deux(a, b);
        if ((b-a) < 0.00001) // précision
            break;
    }
    printf("Interval contenant f(x)=0 est : %.5f -> %.5f\n", a, b);
    return 0;
}