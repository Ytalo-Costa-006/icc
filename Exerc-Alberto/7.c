// descubra se um numero é primo em utilizando FOR
#include <stdio.h>
    
int main(void)
{
    int qtd, ehPrimo = 1;
    printf("Digite um numero: \n");
    scanf("%d", &qtd);

    for (int i = 2; i < qtd; i++)
    {
        if (qtd % i == 0)
        {
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo)
    {
        printf("Eh primo");
    }else{
        printf("Nao eh primo");
    }
    
    
    return 0;
}