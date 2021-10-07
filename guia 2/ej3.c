#include <stdio.h>
#define tope 5
int main()
{
    float vec[tope],vec2[tope];
    int i;

    for (i=0;i<tope;i++)
    {
        printf("ingrese un numero\n");
        scanf("%f",&vec[i]);
        fflush(stdin);
    }
    for(i=0;i<tope;i++)
    {
        vec2[(tope-1)-i]=vec[i];
    }
    for(i=0;i<tope;i++)
        printf("%3.2f\n",vec2[i]);
    system("pause");
}
