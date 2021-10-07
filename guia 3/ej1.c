#include <stdio.h>
#include <stdlib.h>

void pedir(int,int);

int main()
{
    int a,b;
    printf("ingrese un numero: \t\n");
    scanf("%d",&a);
    fflush(stdin);
    printf("ingrese otro numero: \t\n");
    scanf("%d",&b);
    fflush(stdin);
    pedir(a,b);
    system("pause");
}

void pedir(int num1,int num2)
{
    if(num1>num2)
        printf("es mayor %d\t\n",num1);
    else
        printf("es mayor %d\t\n",num2);
}

