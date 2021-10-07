#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

void copiar(char *vec1, char *vec2);

int main()
{
    char *pal1=(char*)malloc(sizeof (char));
    char *pal2=(char*)malloc(sizeof (char));

    printf("ingrese palabra: \n");
    gets(pal1);
    copiar(pal1,pal2);
    printf("%s",pal2);
    free(pal1);
    free(pal2);
    system("pause");
}

void copiar(char *vec1, char *vec2)
{
     int i=0;

     while(vec1[i])
     {
         vec2[i]=vec1[i];
         i++;
     }
     vec2[i]='\0';
}
