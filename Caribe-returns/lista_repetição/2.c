/*
1. Faça um algoritmo que leia 15 números inteiros imprima a quantidade de números pares.
*/

#include <stdio.h>
    
int main(void)
{
    int nmrs,pares = 0;
    for (int i = 0; i < 15; i++)
    {
        printf("digite o nmr %d: ", i+1);
        scanf("%d", &nmrs);
        if (nmrs % 2 == 0)
        {
            pares ++;
        }
    }  
    printf("Qtd pares: %d\n", pares);
    return 0;
}