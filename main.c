#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y,value=1,i;
    printf("ENTER X AND Y :");
    scanf("%d%d",&X,&Y);
    for(i=0;i<Y;i++)
        value*=X;
    printf("\nvalue of %d raised to %d is %d.",X,Y,value);
    return 0;
}
