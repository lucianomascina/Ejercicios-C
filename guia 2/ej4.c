#include <stdio.h>
#include <string.h>
#define tope 250
int main()
{
    char pal1[tope/2],pal2[tope/2],pal3[tope];
    int i=0,j=0;

    printf("ingrese la primera palabra\n");
    gets(pal1);
    printf("ingrese la segunda palabra\n");
    gets(pal2);

    pal3[0]='\0';
    strcat(pal3,pal1);
    strcat(pal3," ");
    strcat(pal3,pal2);
    printf("%s\n",pal3);
    system("pause");
}
