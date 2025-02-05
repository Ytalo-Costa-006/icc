/*
Crie uma função que calcule a potencia de a^b
Em seguida crie um programa que imprima a^b
*/

#include <stdio.h>

int funcPotencia(int a, int b);
int funcAxB(int a, int b);
int funcAplusB(int a, int b);
int dobro(int a);
int main(void)
{
    int a, b;
    printf("Digite um valor inteiro para A:\n");
    scanf("%d",&a);
    printf("Agora digite um valor inteiro para B:\n");
    scanf("%d",&b);
    
    printf("Resultado (A potencia B) : %d\n", funcPotencia(a,b));

    printf("Resultado (A * B apenas somando): %d\n", funcAxB(a,b));
    
    printf("Resultado (A + B utilizando ++): %d\n", funcAplusB(a,b));

    printf("Resultado (A * A sem utilizar multiplicacao): %d\n", dobro(a));


    return 0;
}

int funcPotencia(int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result = a * result;
    }
    return result;
}

int funcAxB(int a, int b){
    int result = 0;

    if(b < 0)
    {
        a = -a;
        b = -b;
    }
    
    for (int i = 0; i < b; i++)
    {
        result = funcAplusB(result, a);
    }
    return result;
}
int funcAplusB(int a, int b){
    int result = a;
    for (int i = 0; i < b; i++)
    {
        result++;
    }
    for (int i = 0; i > b; --i)
    {
        result--;
    }
    return result;
}
int dobro(int a){
    return funcAplusB(a,a);
}