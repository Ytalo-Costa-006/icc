/*
Considerando como dados as notas de uma determinada turma (56 alunos) em um prova, 
escreva um algoritmo que imprima a média da notas dessa turma.
*/

#include <stdio.h>
    
int main(void)
{
    int turma = 56;
    float notas, somaNotas = 0;

    for (int i = 0; i < turma; i++)
    {
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas);
        somaNotas += notas;
        
    }
    
    return 0;
}