/*
Dado o numero natural C decidir se existem naturais A e B tais que A² + B² = C²
*/

#include <stdio.h>
    
int main(void)
{
    int c, a = 1,b;
    int aValid = -1, bValid = -1;
    printf("Digite o numero inteiro de C\n");
    scanf("%d",&c);
    
    while (a < c)
    {
        b= 1;
        while (b < c)
        {
            if ((a * a) + (b * b) == (c * c))
            {
                aValid = a;
                bValid = b;
            }
            b ++;
        }
        a ++;
    }
    
    if (aValid == -1){
      printf("Sem solucao");  
    } 
    else{
        printf("a = %d\nb = %d\n", aValid, bValid);
    }
    return 0;
}