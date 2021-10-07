#include <stdio.h>
#include <stdlib.h>

int menu();

int main()
{
    int x;
    menu();
    system("pause");
}

int menu()
{
    int op;

    printf("MENU\n");
    printf("opcion <1>\n");
    printf("opcion <2>\n");
    printf("opcion <3>\n");
    printf("ingrese opcion: ");
    scanf("%d",&op);
    fflush(stdin);
    return op;
}
