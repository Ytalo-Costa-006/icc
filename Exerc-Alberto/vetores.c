#include <stdio.h>

int funcMDC2(int a, int b);
int funcMdcN(int n, int vet[]);
int funcMmc2(int a,int b);
int funcMmcN(int n, int vet[]);


int main(void)
{
    int a,b;
    printf("digite o valor de a:\n");
    scanf("%d", &a);

    printf("digite o valor de b:\n");
    scanf("%d", &b);

    int  n, vet[100];
    printf("Digite o valor de N:\n");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("digite um numero para a posicao %d:", i+1);
        scanf("%d", &vet[i]);
    }

//MDC para 2 valores

    printf("Resultado MDC de 2 numeros:%d\n", funcMDC2(a,b));    

//MDC para n valores

    printf("Resultado MDC de N numeros: %d\n", funcMdcN(n, vet));
    
//MMC Para 2 valores

    printf("Resultado MMC de 2 numeros: %d\n", funcMmc2(a,b));

//MMC para N valores

    printf("Resultado MMC de N numeros: %d\n", funcMmcN(n, vet));

    return 0;
}

int funcMDC2(int a, int b){

    do{
        int resto = a % b;
        a = b;
        b = resto;
    }
    while (b != 0);

    return a;
}

int funcMdcN(int n, int vet[]){
    int result = vet[0];

    for (int i = 1; i < n; i++)
    {
        result = funcMDC2(result, vet[i]);
    }
    return result;
}

int funcMmc2(int a,int b){
    int result = a * (b / funcMDC2(a, b));
    return result;
}   

int funcMmcN(int n, int vet[]){
    int result = vet[0];
    for (int i = 0; i < n; i++)
    {
        result = funcMmc2(result, vet[i]);
    }
    return result;
}