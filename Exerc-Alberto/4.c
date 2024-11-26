#include <stdio.h>
    
int main(void)
{
    int nmr = 5, fat=1;
    int i =1;

    while (i <= nmr)
    {
        fat = fat * i;
        i= i + 1;
    }
       printf("fat = %d", fat);
    return 0;
}