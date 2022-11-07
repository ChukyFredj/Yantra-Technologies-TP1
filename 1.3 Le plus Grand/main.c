#include <stdio.h>

int main()
{
    int bigger = 0;
    int bigger_pos = 0;
    int value;
    
    for(int i = 1; i <= 20; i++) {
        printf("Entrez le nombre numéro %d : ", i);
        scanf("%d",&value);
        
        if (value > bigger) {
            bigger = value;
            bigger_pos = i;
        }
    }
    
    printf("Le plus grand de ces nombres est : %d\n", bigger);
    printf("C’était le nombre numéro %d\n", bigger_pos);
    return 0;
}