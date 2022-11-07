#include <stdio.h>

float suite(float Un, float n) {
    if (n < 0) {
        printf("Erreur, la valeur ne peut pas etre negative.\n");
        return(0);
    } else 
        return((Un-1 + 1)/ n);
}

int main() {
    float Un = 1;
    float n = 1;
    float U_next = (Un-1 + 1)/ n;
    
    while (42) {
        printf("Entrez le nombre de terme de la suite à calculer n avec n > 0 (0 pour terminer) : ");
        scanf("%f", &n);
        if (n == 0) {
            printf("Fin du programme.\n");
            return (0);
        }
        if (suite(Un, n) != 0) {
            U_next += suite(Un, n);
            printf("U2 est : %f\n", U_next);
        }
    }
}