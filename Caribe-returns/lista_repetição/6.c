/*
6. Construa uma função para calcular o fatorial de número N e retornar a resposta.
*/

#include <stdio.h>

int calculaFatorial(int n);    

int main(void)
{
    int numero;
    printf("Numero: ");
    scanf("%d", &numero);
    printf("Fatorial de %d = %d\n", numero, calculaFatorial(numero));
    return 0;
}

 
int calculaFatorial(int n){
    int fatorial = 1;
    for (int i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
}