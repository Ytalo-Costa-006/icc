#include <stdio.h>
    
int main(void)
{
    char str[1000];
    printf("Digite uma palavra\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%s", str);
    }
    for (int i = 0; str[i] !='\0'; i++)
    {
    printf("%s", str[i]);    
    }
    
    
    return 0;
}