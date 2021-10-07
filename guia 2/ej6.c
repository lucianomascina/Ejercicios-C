#include <stdio.h>
#include <stdlib.h>
#define tope 250

int main()
{
   char pal[tope];
   int i=0;

   printf("ingrese un numero: \n");
   gets(pal);
   while(pal[i])
   {
       switch(pal[i])
       {
           case '0':printf(" CERO");
                    break;
           case '1':printf(" UNO");
           break;
           case '2':printf(" DOS");
           break;
           case '3':printf(" TRES");
           break;
           case '4':printf(" CUATRO");
           break;
           case '5':printf(" CINCO");
           break;
           case '6':printf(" SEIS");
           break;
           case '7':printf(" SIETE");
           break;
           case '8':printf(" OCHO");
           break;
           case '9':printf(" NUEVE");
           break;
       }
       i++;
   }
    system("pause");
}
