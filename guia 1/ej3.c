#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b;
    printf("ingrese un numero\n");
    scanf("%d",&a);
    fflush(stdin);
    printf("ingrese otro numero\n");
    scanf("%d",&b);
    fflush(stdin);
    if(a>b)
        printf("%d es mayor que %d \n",a,b);
    else
    printf("%d es mayor que %d \n",b,a);
    system("pause");
}
