#include <stdio.h>
#include <string.h>

int main() {
    char codice_fiscale[16];
    char nome[30];
    char cognome[30];
    char anno_nascita[4];
    char mese_nascita[10];
    char giorno_nascita[2];
    char sesso[10];
    char luogo_nascita[30];
  
    printf("Inserisci il codice fiscale: ");
    scanf("%s", codice_fiscale);

    // estrazione del nome
    strncpy(cognome, codice_fiscale, 3);
    cognome[3] = '\0';

    // estrazione del cognome
    strncpy(nome, codice_fiscale + 3, 3);
    nome[3] = '\0';

    // estrazione anno di nascita
    strncpy(anno_nascita, codice_fiscale + 6, 2);
    anno_nascita[2] = '\0';

    // estrazione mese di nascita
    strncpy(mese_nascita, codice_fiscale + 8, 2);
    mese_nascita[1] = '\0';

    // estrazione giorno di nascita
    strncpy(giorno_nascita, codice_fiscale + 9, 2);
    giorno_nascita[2] = '\0';

    // estrazione sesso
    strncpy(sesso, codice_fiscale + 11, 1);
    sesso[1] = '\0';

    // estrazione luogo di nascita
    strncpy(luogo_nascita, codice_fiscale + 12, 4);
    luogo_nascita[4] = '\0';

    printf("Nome: %s\n", nome);
    printf("Cognome: %s\n", cognome);
    printf("Anno di nascita: ..%s\n", anno_nascita);
    printf("Mese di nascita: %s\n", mese_nascita);
    printf("Giorno di nascita: %s\n", giorno_nascita);
    printf("Sesso: %s\n", sesso);
    printf("Luogo di nascita: %s\n", luogo_nascita);

    return 0;
}
