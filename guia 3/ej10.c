#include <stdio.h>
#include <stdlib.h>

void total(int unidades,float precio);
int main()
{
    int uni;
    float prec;

    printf("ingrese unidades: \n");
    scanf("%d",&uni);
    printf("ingrese precio: \n");
    scanf("%f",&prec);
    total(uni,prec);
    system("pause");
}
void total(int unidades,float precio)
{
    float total;

    if((unidades>6)&&(unidades<12))
    {
        total=((precio*unidades)-((precio*unidades)*0.04));
        printf("total: %3.2f \n",total);
    }
    else if(unidades>12)
    {
        total=((precio*unidades)-((precio*unidades)*0.1));
        printf("total: %3.2f \n",total);
    }
    else
        printf("total sin descuento: %3.2f \n",(precio*unidades));
}
