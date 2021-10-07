#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x,y,z,i;
    x=1;
    y=0;
    z=0;
    printf("%d \n",z);
    for(i=1;i<50;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%d \n",z);
    }
    system("pause");
}
