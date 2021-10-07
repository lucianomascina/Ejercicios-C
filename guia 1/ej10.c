#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,z;
    for(n=1;n<=10;n++)
    {
        for(z=0;z<10*n;z+=n)
        {
            printf("%d \t",(n+z));
        }
     }
    system("pause");
}
