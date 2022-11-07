#include <stdio.h>

int main()
{
    for(int i = 34; i <= 127; i++){
        if (i % 10 == 0)
            printf("\n");
        printf("[ %d , %c] ", i, i);
    }
    printf("\n");

    return 0;
}