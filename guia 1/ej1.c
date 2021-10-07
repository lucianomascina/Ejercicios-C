#include <stdio.h>
int main()
{
    int x;
    for(x=0;x<256;x++)
        printf("%d\t%c\n",x,x);
    system("pause");
    return 0;
}
