#include <stdio.h>

#include "perritos.h"
#include "validacion.h"

#define M 1000

void initPerritos(ePerrito perritos[M])
{
    int i;
    for(i=0; i<M; i++)
    {
        perritos[i].isEmpty=0;
    }
}

void agregarPerrito(ePerrito perrito[M], int idMax)
{
    int i;

    for(i=0; i < M; i++)
    {
        if(perrito[i].isEmpty==0)
        {
            perrito[i].nombre = validationStr("Ingrese nombre perrito: ");

            while(validationStr(perrito[i].nombre)==1)
            {
                printf("Usted ha ingresado un dato incorrecto. Ingrese nuevamente: ");
                fflush(stdin);
                gets(perrito[i].name);
            }

            perrito[i].dias = validationInt("Ingrese dias del perrito: ");

            while(validationInt(perrito[i].dias)==1)
            {
                printf("Usted ha ingresado un dato incorrecto. Ingrese nuevamente: ");
                fflush(stdin);
                gets(perrito[i].dias);
            }

            perrito[i].raza = validationStr("Ingrese raza del perrito: ");

            while(validationStr(perrito[i].raza)==1)
            {
                printf("Usted ha ingresado un dato incorrecto. Ingrese nuevamente: ");
                fflush(stdin);
                gets(perrito[i].raza);
            }

            perrito.reservado = validationStr("Ingrese si el perrito esta reservado S/N");

            while(validationStr(perrito[i].reservado)==1)
            {
                printf("Usted ha ingresado un dato incorrecto. Ingrese nuevamente: ");
                fflush(stdin);
                gets(perrito[i].reservado);
            }

            perrito.genero = validationStr("Ingrese genero del perrito F/M");

            while(validationStr(perrito.genero)==1)
            {
                printf("Usted ha ingresado un dato incorrecto. Ingrese nuevamente: ");
                fflush(stdin);
                gets(perrito[i].genero);
            }
            perrito[i].id_cachorro = idMax;
            ll_add(perrito, perrito[i]);
            break;
        }
    }
}
