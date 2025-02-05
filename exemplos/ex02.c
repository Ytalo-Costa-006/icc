#include <stdio.h>
    
int main(void)
{
    int n1;
    scanf("%d",&n1);
    
    switch (n1)
    {
    case 1:
        printf("Voce digitou 1\n");

        break;
    case 2:
        printf("Voce digitou 2\n");
        
        break;
    case 3:
        printf("Voce digitou 3\n");
        
        break;
    default:
        break;
    }

    return 0;
}