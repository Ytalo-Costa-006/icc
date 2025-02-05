    /*
    1. Faça um algoritmo que leia 10 números inteiros imprima a quantidade de números positivos.
    */

#include <stdio.h>
    
int main(void)
{
    int nmrs,positivos = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("digite o nmr %d: ", i+1);
        scanf("%d", &nmrs);
        if (nmrs > 0)
        {
            positivos ++;
        }
    }  
    printf("Qtd positivos: %d\n", positivos);
    return 0;
}