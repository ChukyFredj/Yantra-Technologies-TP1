#include <stdio.h>

void detail(char c, int value)
{
    if (value == 0 && c == '*') {
        printf("1\n");
        return;
    }
    for(int i = 1; i < value; i++)
        printf("%d %c ", i, c);
    printf("%d\n", value);
}

void addition(int value)
{
    int result = 0;
    for(int i = 1; i <= value; i++)
        result += i;
    printf("- %d = ", result);
    detail('+', value);
}

void factoriel(int value)
{
    int result = 1;
    for(int i = 1; i <= value; i++)
        result *= i;
    printf("- %d! = %d = ", value, result);
    detail('*', value);
}

int main()
{
    int value;
    printf("Entre une valeur supérieur a 0 : 5 \n");

    scanf("%d",&value);
    if (value > 5 || value < 0)
        printf("\033[31mla valeur doit être entre 0 et 5 \n");
    else {
        addition(value);
        factoriel(value);
    }
    return 0;
}