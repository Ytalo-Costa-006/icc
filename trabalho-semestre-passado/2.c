/*
Crie um algoritmo que transforma todos os caracteres de uma string em maiúsculos.
Dica: avalie a tabela ASCII.
*/

#include <stdio.h>
#define tamStr 20
int main(void)
{
    char str[tamStr] = "ola";

    for (int i = 0; i < tamStr; i++)
    {
        if (str[i] != '\0')
        {
           str[i] = str[i] - 32;
           printf("%c", str[i]);
        }
    }

    return 0;
}