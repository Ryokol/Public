#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    int* mese;
    char codice_fiscale[16];

    printf("Inserisci il codice fiscale: ");

    for(i = 0; i < 16; i++)
    {
       scanf("%c",&codice_fiscale[i]);
    }
    printf("Codice Inserito: ");
    for (i = 0; i < 16; i++)
    {
        printf("%c",codice_fiscale[i]);
    }
    printf("\n");
    &mese = codice_fiscale[8];
    printf("%c",mese_nascita(&mese));
}

int mese_nascita(char mese_test[1])
{
    int c, i;
    char numero_mese[]={'A','B','C','D','E','H','L','M','P','R','S','T'};
    for (i = 0; i < 12; i++)
    {
        if(numero_mese[i] == &mese)
        {
            return numero_mese[i];
        }
    }
    return 0;
}