#include<stdio.h>
#include<string.h>

typedef struct s_libro
{
    char titolo[50];
    char autore[50];
    int pagine;
}t_libro;

int main()
{
    t_libro libro1;
    t_libro *p;

    p = &libro1;
    printf("Inserisci il titolo del libro: ");
    scanf("%s",p->titolo);
    printf("Inserisci l'autore: ");
    scanf("%s",p->autore);
    printf("Inserisci numero pagine: ");
    scanf("%d",&p->pagine);

    printf("\nTitolo Libro: %s\n",p->titolo);
    printf("Autore Libro: %s\n",p->autore);
    printf("Numero pagine:%d\n",p->pagine);

    return 0;
}

