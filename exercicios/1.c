#include <stdio.h>
    
int main(void)
{
    float notas[10];
    float somaNotas = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota de posicao: %d\n", i+1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }
    float mediaNotas = somaNotas / 10;
    
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > mediaNotas)
        {
            printf("Nota acima da media: %.2f\n", notas[i]);
        }
    }
    
    return 0;
}