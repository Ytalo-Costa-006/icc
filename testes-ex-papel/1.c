#include <stdio.h>
    
int main(void)
{
    int n1, soma_pos = 0, negativos = 0;   
    
    for (int i = 0; i < 4; i++)
    {
        printf("Digite um valor inteiro\n");
        scanf("%d", &n1);

        if (n1 > 0)
        {
            soma_pos += n1;
        }else if(n1 < 0){
            negativos ++;
        }
    }
    printf("Soma dos positivos: %d\n", soma_pos);
    printf("Total de negativos: %d\n", negativos);
    return 0;
}