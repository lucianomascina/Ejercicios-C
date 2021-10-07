#include <stdio.h>
#include <stdlib.h>
void main()
{
    int temp=-10;
    float far,kel;
    printf("c\t f\t k\n");
    for(temp;temp<=40;temp++)
    {
        far=(float)temp*1.8+32;
        kel=(float)temp+273.15;
        printf("%d\t%3.2f\t%3.2f\n",temp,far,kel);
    }
    system("pause");
}
