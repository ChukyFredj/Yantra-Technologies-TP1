#include <stdio.h>
#include <math.h>

void afficheTriangleSapin(const unsigned int n, char c) {
    int lastline = (n-1)*2+1;
    printf("\033[0;32m");
    for (int i = 0; i < n; i++) {
        for (int espace = n-i-1; espace > 0; espace--) {
            printf(" ");
        }
        for (int étoile = 2*i+1; étoile > 0; étoile--) {
            printf("%c", c);
        }
        printf("\n");
        
    }
    printf("\033[0;33m");
    for (int lignetronc = n/5; lignetronc > 0; lignetronc--) {
        for (int espacet = lastline/3; espacet > 0; espacet--){
            printf(" ");
        }
        for (int espacee = (lastline + 2)/3; espacee > 0; espacee--) {
            printf("%c", c);
        }
        printf("\n");
    }

}

void main(void) {
    int size;
    char c;

    printf("Le charactère :\n");
    scanf("%c",&c);

    printf("La taille :\n"); 
    scanf("%d",&size);
    afficheTriangleSapin(size, c);
    printf("\033[0;36m");
    for (int espacet = ((size-1)*2+1)/3; espacet > 0; espacet--){
            printf(" ");
    }
    for (int caractère = 0; caractère < 35; caractère++){
            printf("%c", c);
            if (caractère == 22)
                printf(" Joyeux Noël ");
    }
    printf("\n");
}
