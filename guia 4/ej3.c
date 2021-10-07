#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

void agregar(int *vec,int dato,int *tope);
void recorrer(int tope,int *vec);

int main()
{
    int *vec=(int*)malloc(sizeof (int)),op=0,x,w=0;

    do
    {
        printf("MENU\n");
        printf("<1> AGREGAR NUMERO\n");
        printf("<2> RECORRER VECTOR\n");
        printf("<3> SALIR\n");
        printf("INGRESE OPCION: \n");
        scanf("%d",&op);

        switch(op)
        {
             case 1:
                printf("ingrese numero: \n");
                scanf("%d",&x);
                agregar(vec,x,&w);
                break;
            case 2:
                recorrer(w,vec);
                break;
            default:
                printf("OPCION INCORRECTA\n");
                break;
        }
    }while(op !=3);
    system("pause");
}

void agregar(int *vec,int dato,int *tope)
{
    vec[*tope]=dato;
    ++*tope;
}
void recorrer(int tope,int *vec)
{
    int i;
    for(i=0;i<tope;i++)
    {
        printf("%d\t",vec[i]);
    }
}
