/*
4. Elabore um algoritmo que imprima todos os números pares compreendidos entre 85 e 907. 
O programa deve também calcular e mostrar a soma desses valores.
*/
#include <stdio.h>
    
int main(void)
{
    int soma = 0;
    
    for (int i = 85; i <= 907; i++)
    {
        if (i % 2 == 0)
        {
            printf("Numero par: %d\n", i);
            soma += i;
        }
    }
    printf("Soma dos pares: %d\n", soma);
    return 0;
}