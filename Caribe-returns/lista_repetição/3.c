/*
3. Faça um algoritmo que some todos os números compreendidos entre -10 à 100 e exiba o resultado.
*/

#include <stdio.h>
    
int main(void)
{
    int soma = 0;
    for (int i = -10; i <= 100; i++)
    {
        soma += i;
    }
    printf("Soma de todos os numeros compreendidos entre -10 e 100: %d\n", soma);
    return 0;
}