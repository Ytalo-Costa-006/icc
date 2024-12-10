/*
Crie uma função que calcule a potencia de a^b
Em seguida crie um programa que imprima a^b
*/

#include <stdio.h>

int func(int a, int b);
int funcAxB(int a, int b);
int funcAplusB(int a, int b);

int main(void)
{
    int a, b;
    printf("Digite um valor inteiro para A:\n");
    scanf("%d",&a);
    printf("Agora digite um valor inteiro para B:\n");
    scanf("%d",&b);
    
    printf("Resultado (A potencia B) : %d\n", func(a,b));

    printf("Resultado (A * B apenas somando): %d\n", funcAxB(a,b));
    
    printf("Resultado (A + B utilizando ++): %d\n", funcAplusB(a,b));


    return 0;
}

int func(int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result = a * result;
    }
    return result;
}

int funcAxB(int a, int b){
    int result = 0;
    for (int i = 0; i < b; i++)
    {
        result += a;
    }
    return result;
}

int funcAplusB(int a, int b){
    int result = a;
    for (int i = 0; i < b; i++)
    {
        result++;
    }
    return result;
}