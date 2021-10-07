#include <stdlib.h>
#include <stdio.h>

void intercambiar(int *a,int *b);

int main()
{
    int x=3, y =4;

    printf("%d %d\n",x,y);
    intercambiar(&x,&y);
    printf("%d %d\n",x,y);
    system("pause");
}

void intercambiar(int *a, int *b)
{
    int z=*a;
    *a=*b;
    *b=z;
}
