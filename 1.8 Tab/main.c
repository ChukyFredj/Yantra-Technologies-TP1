#include <stdio.h>

void tab_prog (int size) {
    int tab[size][size];
    float moyen_total = 0;
    float moyen = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Entrez valeur [%d,%d] : ", i+1, j+1);
            scanf("%d", &tab[i][j]);
        }
    }
    printf("\n");
    for (int k = 0; k < size; k++) {
        moyen = 0;
        for (int f = 0; f < size; f++) {
            printf("%d\t", tab[k][f]);
            moyen += tab[k][f];
        }
        moyen_total += moyen;
        printf("(%.2f)\n", moyen/size);
    }
    for (int k = 0; k < size; k++) {
        moyen = 0;
        for (int f = 0; f < size; f++) {
            moyen += tab[f][k];
        }
        printf("(%.2f)\t", moyen/size);
    }
    printf("(%.2f)\n\n", moyen_total/(size));

}

int main(int argc, char const *argv[]) {
    int size = 1;

    while (1) {
        printf("Entrez la taille du tableau (0 pour terminer) : ");
        scanf("%d", &size);
        if (size == 0)
            return (0);
        else if (size < 0)
            printf("Entrez un nombre possitif\n");
        else 
            tab_prog(size);
    }
}
