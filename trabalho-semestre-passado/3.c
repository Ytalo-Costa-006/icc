/*
Crie um algoritmo que recebe uma string e um caractere,
e imprima o número de vezes que esse caractere aparece na string.
*/

#include <stdio.h>
#define tamStr 30

int main(void)
{
    char str[tamStr];
    char letra;
    int vzsLetra = 0;

    printf("Digite uma letra: \n");
    scanf(" %c", &letra);
    
    printf("Digte uma palavra: \n");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letra) vzsLetra ++;
    }
    printf("Vezes que a letra \"%c\" apareceu %d vezes", letra, vzsLetra);
    
    return 0;
}