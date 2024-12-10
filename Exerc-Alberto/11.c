#include <stdio.h>
    
int main(void)
{
   int nmr = 0;
    while (1)//o continue sai aqui
    {
        scanf("%d", &nmr);

        if (nmr < 0) break;

        if (nmr % 2 == 0)
        {
            continue;
        }
        printf("%d EH IMPAR!!!!\n", nmr);
    }    
    // o break sai aqui
    return 0;
}