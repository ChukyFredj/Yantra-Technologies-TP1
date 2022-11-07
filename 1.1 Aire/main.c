#include <stdio.h>
#include <math.h>
#define Pi 3.1415927

float pentagone(float c, float n)
{
    return(n*pow(c,2)/(4*tanf(Pi/5)));
}

int main()
{
    float c = 0;
    float n = 0;
    
    printf("Valeur de la mesure d'un côté c (en m) : ");
    scanf("%f",&c);
    printf("Nombre de côtés n (en m) : ");
    scanf("%f",&n);
    printf("L'aire du pentagone est égal à : %.2f\n", pentagone( c, n ));
    return 0;
}