/*
Escreva um programa que converta celcius para fahrenheit
e vise versa
*/

#include <stdio.h>
    
int main(void)
{
    char letra;
    float celsius = 0,fahrenheit = 0;
    float temp;

    printf("Digite uma sequencia de digitos pra temperatura seguida sem espaco por F ou C\n");
    scanf("%f%c", &temp, &letra);

    if (letra == 'c' || letra == 'C')
    {
        celsius = temp * 1.8 + 32;
        printf("Celsius para fahrenheit: %.2f", celsius);
    }

    if (letra == 'f' || letra == 'F')
    {
        fahrenheit = temp;
        celsius = fahrenheit - 32 / 1.8;
        printf("fahrenheit para Celsius: %.2f", celsius);
    }

    return 0;
}