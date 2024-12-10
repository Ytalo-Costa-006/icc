#include <stdio.h>
#define tamVet 5

int main(void)
{
    
    int vet[tamVet], soma =0;
    printf("Digite 5 valores para serem somados");
    for (int i = 0; i < tamVet; i++)
    {
        printf("Valor %d:\n", i+1);
        scanf("%d", &vet[i]);

        soma += vet[i];
    }
    printf("A soma dos valores digitados: %d\n", soma);

    return 0;
}