/*
5. Faça um algoritmo que leia 10 números inteiros imprima a soma dos números positivos e a soma dos números negativos.
*/

#include <stdio.h>
    
int main(void)
{
    int numero ,somaPos = 0, somaNeg = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &numero);

        if (numero > 0)
        {
            somaPos += numero;
        }else if (numero < 0)
        {
            somaNeg += numero;
        }
    }

    printf("Soma positivos: %d\n", somaPos);
    printf("Soma negativos: %d\n", somaNeg);

    return 0;
}