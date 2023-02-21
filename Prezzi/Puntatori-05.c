#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct spesa
{
    char prodotto;
    int somma;
        struct nodo *next;
    
}nodo;

int main()
{
    int i,numero;
    nodo spesa1;
    nodo *p;
    p = &spesa1;

    printf("Totale numero prodotti: ");
    scanf("%d",&numero);
    for(i=0;i<numero;i++)
    {
        printf("Inserisci prodotto: ");
        scanf("%s",p->prodotto);
        printf("Inserisci la quantità: ");
        scanf("%d",&p->somma);
        
        if(p==0){
            p=NULL;
            exit;
        }
        else{
            p->next;
        }
        
    }
    
}