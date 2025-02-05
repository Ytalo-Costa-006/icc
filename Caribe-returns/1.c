/*
1. Construa um algoritmo que leia dois números reais
e a operação aritmética desejada 
(use um char para armazenar a operação). 
Calcule então a resposta adequada. Sendo a operação ‘+’ uma soma, ‘*’ multiplicar os dois números,
‘/’ dividir o primeiro pelo segundo, ‘-‘ subtração do primeiro pelo segundo 
(utilize o comando switch).
*/
#include <stdio.h>

float soma(float n1, float n2);
float subtrai(float n1, float n2);
float multiplica(float n1, float n2);
float divide(float n1, float n2);

int main(void)
{
    float n1, n2;

    char operacao;

    printf("Digite dois numeros reais.\nPrimeiro: ");
    scanf("%f", &n1);
    
    printf("Segundo: ");
    scanf("%f", &n2);
    
    printf("Digite a operacao desejada: ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case '+':
        printf("Resultado: %.2f\n", soma(n1,n2));
        break;
    
    case '-':
        printf("Resultado: %.2f\n", subtrai(n1,n2));
        break;

    case '*':
        printf("Resultado: %.2f\n", multiplica(n1,n2));
        break;

    case '/':
        printf("Resultado: %.2f\n", divide(n1,n2));
        break;
    }

    return 0;
}
float soma(float n1, float n2){
    return n1 + n2;
}

float subtrai(float n1, float n2){
    return n1 - n2;
}

float multiplica(float n1, float n2){
    return n1 * n2;
}

float divide(float n1, float n2){
    return n1 / n2;
}