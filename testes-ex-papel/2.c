#include <stdio.h>
    
int main(void)
{
    int idade, soma_idade = 0;
    float altura, altura_media = 0, idade_media = 0, soma_altura = 0;
    
    for (int i = 0; i < 4; i++)
    {
        printf("Altura?\n");
        scanf("%f", &altura);
        printf("Idade?\n");
        scanf("%d", &idade);
        
        if (altura < 1.7)
        {
            int qtd_baixos = 0;
            qtd_baixos ++;
            soma_idade += idade;
            idade_media = soma_idade / qtd_baixos;
        }
        if (idade > 20)
        {
            int velhos = 0;
            velhos++;
            soma_altura += altura;
            altura_media = soma_altura / velhos;
        }
    }
    printf("Altura Media alunos com mais de 20 anos: %.2f\n", altura_media);
    printf("Idade media alunos com menos de 1.70: %.2f", idade_media);
    
    return 0;
}