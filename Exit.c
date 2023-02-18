//Ricevi in input un voto da 0-30;

/*
    Se il voto è inferiore a 18: stampare "VOTO INSUFFICIENTE"
    Se il voto è maggiore o uguale a 18: Stampare "VOTO SUFFICIENTE"
    Se il voto è 30: Stampare "VOTO MASSIMO"
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Voto,i;
    printf("Inserisci il Voto: ");
    scanf("%d",&Voto);

    if(Voto<0 || Voto>30)
    {
        printf("Il voto non è accettabile\n");
        return(0);
    }
    if(Voto>=18)
    {
        if(Voto==30)
        {
            printf("Voto massimo\n");
            return 0;
        }
        else
        {
        printf("Il voto è sufficiente\n");
        return 0;
        }
    }
    else
    {
        printf("Il voto è insufficiente\n");
        return 0;
    }
}

