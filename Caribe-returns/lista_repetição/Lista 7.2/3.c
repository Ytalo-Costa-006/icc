#include <stdio.h>
#define products 1

float taxCalc(float value);
float transportCalc(char isDangerous ,int countryCode);

int main(void)
{
    float price, taxValue, transportValue, insuranceValue = 0, finalPrice, allTax;
    char transport, isDangerous;
    int countryCode;

    for (int i = 0; i < products; i++)
    {
        printf("Digite o preco unitario do produto: ");
        scanf("%f", &price);
        
        printf("Digite o pais de origem do produto: ");
        scanf("%d", &countryCode);
        
        printf("Digite o meio de transporte produto\n(A - aereo, F - fluvial, T - terrestre): ");
        scanf(" %c", &transport);
        
        printf("A carga e perigosa?\n(S - sim, N - nao) ");
        scanf(" %c", &isDangerous);
    }

    if (countryCode == 2)
    {
        insuranceValue = price / 2;
    }else if (transport == 'A' || transport == 'a')
    {
        insuranceValue = price / 2;
    }
    
    taxValue = taxCalc(price);
    transportValue = transportCalc(isDangerous, countryCode);
    
    finalPrice = price + taxValue + transportValue + insuranceValue;
    allTax = taxValue + transportValue + insuranceValue;

    printf("Valor total: R$%.2f\n", finalPrice);
    printf("Total de taxas: R$%.2f\n", allTax);
    return 0;
}

float taxCalc(float value){
    float finalValue;
    if (value <= 100)
    {
        finalValue = value * 0.05;
    }else
    {
        finalValue = value * 0.1;
    }
    return finalValue;
}

float transportCalc(char isDangerous ,int countryCode){
    float transportValue;
    if (isDangerous == 'S' || isDangerous == 's')
    {
        if (countryCode == 1)
        {
            transportValue = 50.0;
        }else if (countryCode == 2)
        {
            transportValue = 35.0;
        }else if (countryCode == 3)
        {
            transportValue = 24.0;
        }
    }else if (isDangerous == 'N' || isDangerous == 'n')
    {

        if (countryCode == 1)
        {
            transportValue = 12.0;
        }else if (countryCode == 2)
        {   
            transportValue = 35.0;
        }else if (countryCode == 3)
        {
            transportValue = 60.0;
        }
    }
    return transportValue;
}