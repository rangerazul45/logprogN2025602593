#include <stdio.h>

int main()
{
    int op,inv,innv;
    printf("¿Que tipo de pizza desea?\nVegetariana (1) o no vegetariana (2)\n");
    scanf("%d", &op);
    if(op==1)
    {
        printf("Selecione los ingredientes: pimiento (1) o tofu(2)\n");
        scanf("%d", &inv);
        if(inv==1)
        {
            printf("Pizza vegetariana con pimineto\n");
        }
        else if(inv==2)
        {
            printf("Pizza vegetariana con tofu\n");
        }
        else
        {
            printf("opcion invalida\n");
        }
    }
    else if(op==2)
    {
        printf("Selecione los ingredientes: peperoni (1), jamon(2) o salmon (3)\n");
        scanf("%d", &innv);
        if(innv==1)
        {
            printf("Pizza vegetariana con peperoni\n");
        }
        else if(innv==2)
        {
            printf("Pizza vegetariana con jamon\n");
        }
        else if(innv==3)
        {
            printf("Pizza vegetariana con salmon\n");
        }
        else
        {
            printf("opcion invalida");
        }
    }
    else
    {
        printf("opcion invalida");
    }
    printf("\n");
}
