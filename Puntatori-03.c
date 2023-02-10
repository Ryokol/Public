#include<stdio.h>

int CodificaMese(int mese);

int main()
{
    char *pointer;
    char giorno,anno;
    int check;
    int mese;

    int i;
    char CodiceFiscale[16];

    printf("Inserisci il codice fiscale: ");

    for(i = 0; i < 16; i++)
    {
       scanf("%c",&CodiceFiscale[i]);
    }
    printf("\nCodice Inserito: ");
    for (i = 0; i < 16; i++)
    {
        printf("%c",CodiceFiscale[i]);
    }
    printf("\n");

    printf("\nGiorno: ");
    for(i=9;i<11;i++)
    {
        pointer =& CodiceFiscale[i];
        giorno = *pointer;
        printf("%c",giorno);
    }
    printf(\n);

    pointer = & CodiceFiscale[8];
    mese = *pointer;

    check = CodificaMese(mese);
    if(check==0)
    {
        printf("CODICE FISCALE ERRATO\n\n");
        return 0;
    }

    printf("\nAnno: ");
    for(i=6;i<8;i++)
    {
        pointer =& CodiceFiscale[i];
        anno = *pointer;
        printf("%c",anno);
    }
    printf("\n");
    
}


int CodificaMese(int mese)
{
    int i;
    char numero_mese[]={'A','B','C','D','E','H','L','M','P','R','S','T'};
    for(i=0;i<12;i++)
    {
        if(mese == numero_mese[i])
        {
            if(i==0)
            {
                printf("Mese: Gennaio");
            }
            if(i==1)
            {
                printf("Mese: Febbraio");
            }
            if(i==2)
            {
                printf("Mese: Marzo");
            }
            if(i==3)
            {
                printf("Mese: Aprile");
            }
            if(i==4)
            {
                printf("Mese: Maggio");
            }
            if(i==5)
            {
                printf("Mese: Giugno");
            }
            if(i==6)
            {
                printf("Mese: Luglio");
            }
            if(i==7)
            {
                printf("Mese: Agosto");
            }
            if(i==8)
            {
                printf("Mese: Settembre");
            }
            if(i==9)
            {
                printf("Mese: Ottobre");
            }
            if(i==10)
            {
                printf("Mese: Novembre");
            }
            if(i==11)
            {
                printf("Mese: Dicembre");
            }
            return 1;
        }
    }
    return 0;
}