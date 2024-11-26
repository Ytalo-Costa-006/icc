/*
dado um inteiro N seguido de inteiros A1 A2 A3 An calcule e imprima a soma 
*/

#include <stdio.h>
    
int main(void)
{
    int qtd, soma= 0, i = 0, nmr;
    printf("Digite a quantidade de numeros a serem digitados:\n");
    scanf("%d", &qtd);

    while (i < qtd)
    {
        printf("Digite o Numero %d:\n", i + 1);
        scanf("%d", &nmr);
        soma += nmr;
        i++;
    }
    printf("Soma = %d", soma);
    
    return 0;
}