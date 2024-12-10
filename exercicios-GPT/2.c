#include <stdio.h>
#define tamStr 25
int main(void)
{
    char str[tamStr];
    int qtdVogais =0, qtdConsoates =0;

    printf("Digite uma palavra de ate 25 char:\n");
    scanf(" %s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            qtdVogais++;
        }else{
            qtdConsoates++;
        }
    }
    printf("Quantidade de vogais na palavra %s: %d\n", str, qtdVogais);
    
    printf("Quantidade de consoantes na palavra %s: %d\n", str, qtdConsoates);
    return 0;
}