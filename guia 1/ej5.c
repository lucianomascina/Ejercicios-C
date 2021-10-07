#include <stdio.h>
#include <stdlib.h>
void main()
{
    char a,b;
    printf("ingrese una letra\n");
    scanf("%c",&a);
    fflush(stdin);
    printf("ingrese otro letra\n");
    scanf("%c",&b);
    fflush(stdin);
    if(a>b)
        printf("%c esta antes que %c \n",b,a);
    else
    printf("%c esta antes que %c \n",a,b);
    system("pause");
}
