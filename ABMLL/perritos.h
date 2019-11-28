#include <stdio.h>
#include <conio.h>

typedef struct
{
    int id_cachorro;
    char nombre[51];
    int dias;
    char raza[51];
    char reservado[51];
    char genero[51];
    int isEmpty;
}ePerrito;


void initPerritos(ePerrito[]);
void agregarPerrito(ePerrito[], int);
