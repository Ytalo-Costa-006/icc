/*
 Considerando como dados as notas de uma determinada turma (56 alunos) em uma prova,
 escreva um algoritmo que imprima aquelas notas que estão acima da média das notas.
*/

#include <stdio.h>
#define turma 56
int main(void)
{
    float vetNotas[turma];
    float media, somaNotas = 0;

    for (int i = 0; i < turma; i++)
    {
        printf("Digite a nota do aluno %d: \n", i+1);
        scanf("%f", &vetNotas[i]);
    }
    
    for (int i = 0; i < turma; i++)
    {
        somaNotas += vetNotas[i];
        media = somaNotas / turma;

        if (vetNotas[i] > media)
        {
            printf("Nota acima da media: %.2f\n", vetNotas[i]);
        }
    }
    return 0;
}