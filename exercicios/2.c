#include <stdio.h>
    
int main(void)
{
    int v[6];
    
    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor inteiro, positivo ou negativo para a posicao %d: ", i+1);
        scanf("%d", &v[i]);    
    }

    int valorNegativo =0;

    for (int i = 0; i < 6; i++)
    {
        if (v[i] < 0)
        {
            valorNegativo++;
        }
    }
    printf("Total de valores negativos: %d", valorNegativo);
    return 0;
}