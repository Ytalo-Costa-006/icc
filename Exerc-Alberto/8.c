//Calcule a soma de 20 numeros inteiros com FOR
#include <stdio.h>
#define tam 20
int main(void)
{
    int nmr, soma = 0;
    
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o numero %d:\n", i+1);
        scanf("%d", &nmr);

        soma += nmr;
    }
    printf("A soma de todos os numeros eh: %d", soma);
    
    return 0;
}