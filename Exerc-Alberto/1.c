/*
Escreva um programa que decide se um ano é bissexto 
Lê um numero inteiro A
Imprime "Bissexto" ou "Não Bissexto"
Se A for ou não bissexto respectivamente
*/

#include <stdio.h>
    
int main(void)
{
    int A;

    printf("Digite um ano e verifique se eh ou nao BISSEXTO:\n");
    scanf("%d", &A);

    if (A % 4 == 0 && A % 100 != 0 || A % 400 ==0)
    {
        printf("Bissexto");   
    }
    else
    {
        printf("Nao Bissexto");
    }
    return 0;
}