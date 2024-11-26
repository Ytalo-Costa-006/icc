//dado o tamanho inteiro C encontrar todos os triangulos retangulos cujas hipotenusas sejam iguais a C
#include <stdio.h>
    
int main(void)
{
    int c;
    printf("Digite um valor para C\n");
    scanf("%d", &c);

    for (int i = 1; i < c; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (i*i + j*j == c*c)
            {
                printf("\n%d * %d + %d * %d = %d\n", i, i, j, j, c);
            }
        }
        //if(achei) break;
    }
    
   return 0;
} 