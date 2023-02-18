//Scrivere un programma che prenda in input 2 date (gg/mm/aaaa) e restituisca la più recente

#include<stdio.h>
#include<stdlib.h>

int recente();
typedef struct anno
{
    char player[20];
    int giorno;
    int mese;
    int anno;
}nodo;
    nodo anno1;
    nodo anno2;
int main()
{
    int i;
    nodo *data1,*data2;
    data1 = &anno1;
        printf("NOME PLAYER: ");
        scanf("%s",data1->player);
        printf("Inserisci una data\n");
        printf("Giorno: ");
        scanf("%d",&data1->giorno);
        printf("Mese: ");
        scanf("%d",&data1->mese);
        printf("Anno: ");
        scanf("%d",&data1->anno);
    data2 =&anno2;
        printf("\nNOME PLAYER: ");
        scanf("%s",data2->player);
        printf("Inserisci una data\n");
        printf("Giorno: ");
        scanf("%d",&data2->giorno);
        printf("Mese: ");
        scanf("%d",&data2->mese);
        printf("Anno: ");
        scanf("%d",&data2->anno);

        i=recente(anno1,anno2);
        if(i==2)
        {
            printf("\n%s è il più giovane\n\n",data2->player);
        }
        else if(i==1)
        {
            printf("\n%s è il più giovane\n\n",data1->player);
        }
        else
        {
            printf("\n%s e %s sono gemelli\n\n",data1->player,data2->player);
        }
    return 0;
}

int recente()
{

    nodo A=anno1,B=anno2;
    nodo *a;
    nodo *b;

    a=&A;
    b=&B;

    if((a->anno) == (b->anno))
    {
        if((a->mese) == (b->mese))
        {
            if((a->giorno) == (b->giorno))
            {
                return 0;
            }
            else if((a->giorno) > (b->giorno))
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        if((a->mese) > (b->mese))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    if((a->anno) > (b->anno))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}