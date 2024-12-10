#include <stdio.h>
#define tamFor 20
int main(void)
{
    for (int i = 0; i < tamFor ; i++)
    {
        //Nesta condição é checado se a variavel i é impar
        //caso seja o continue retorna ao inicio do for 
        if (i % 2 == 1)
        {
            printf("%d eh impar e nao ha uma metade inteira\n\n", i);
            continue;
        }
        printf("Metade de %d = %d\n", i, i/2);
    }
    

    return 0;
}