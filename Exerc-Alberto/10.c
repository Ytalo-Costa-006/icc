#include <stdio.h>

#define tamFor 20

int main(void)
{
    for (int i = 1; i <= tamFor; i++)
    {
        for (int j = 1; j <= tamFor; j++)
        {
            for (int k = 1; k <= tamFor; k++)
            {
                // verifica se a soma de dois lados é menor  que o lado restante 
                if (i + j < k || j + k < i || i + k < j)
                { 
                    continue;
                }
                // Verifica se é retangulo com k sendo hipo
                if (i * i + j * j == k * k)
                {
                    continue;
                }
                // Verifica se é retangulo com i sendo hipo
                if (k * k + j * j == i * i)
                {
                    continue;
                }
                // Verifica se é retangulo com j sendo hipo
                if (i * i + k * k == j * j)
                {
                    continue;
                }
                printf("Quadrado com lados: %d %d %d\n", i, j, k);
            }
        }
    }
    
    
    return 0;
}