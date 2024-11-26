#include <stdio.h>
    
int main(void)
{
    int nmr = 16, ctrl= 1;

    while (ctrl* ctrl < nmr)
    {
        ctrl += ctrl;
    }
    if (ctrl * ctrl == nmr)
    {
        printf("raiz de %d = %d",nmr, ctrl);
    }
    return 0;
}