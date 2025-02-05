/*
7. Para uma turma de 62 alunos, construir um algoritmo que determine:  
(a) Idade media dos alunos com altura menor que 1.70;   
(b) A altura media dos alunos com mais de vinte anos.
*/

#include <stdio.h>
    
int main(void)
{
    int alunos = 5, contBaixos = 0, contVelhos = 0, idade, somaIdade = 0;
    float mediaIdade, altura, mediaAltura, somaAltura = 0.0;
    for (int i = 0; i < alunos; i++)
    {
        printf("Idade do aluno %d: ", i+1);
        scanf("%d", &idade);

        printf("Altura do aluno %d: ", i+1);
        scanf("%f", &altura);

        if (altura < 1.7)
        {
            contBaixos ++;
            somaIdade += idade;
        }
        if (idade > 20)
        {
            contVelhos ++;
            somaAltura += altura;
        }
    }
    mediaIdade = somaIdade / (float)contBaixos;
    mediaAltura = somaAltura / (float)contVelhos;

    printf("Media de idade dos alunos com menos de 1.70: %.2f\n", mediaIdade);
    
    printf("Media de altura dos alunos com mais de 20 anos: %.2f\n", mediaAltura);
    return 0;
}