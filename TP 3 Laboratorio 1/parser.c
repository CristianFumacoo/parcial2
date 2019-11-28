#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"


int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    Employee* pEmployee;

    char idVueloAux[100];
    char idAvionAux[100];
    char idPilotoAux[100];
    char fechaAux[100];
    char destinoAux[100];
    char cantPasajerosAux[100];
    char horaDespegueAux[100];
    char horaLlegadaAux[100];

    int retorno = -1;
    int flag = 1;

    if(pFile != NULL)
    {
        while(!feof(pFile))
        {
            if(flag)
            {
                fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", idVueloAux, idAvionAux, idPilotoAux,
                                                                                    fechaAux, destinoAux,cantPasajerosAux,
                                                                                    horaDespegueAux, horaLlegadaAux );
                flag = 0;
            }
            fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", idVueloAux, idAvionAux, idPilotoAux,
                                                                                    fechaAux, destinoAux,cantPasajerosAux,
                                                                                    horaDespegueAux, horaLlegadaAux );

            printf("%s - %s - %s - %s - %s - %s - %s - %s\n", idVueloAux, idAvionAux, idPilotoAux,
                                          fechaAux, destinoAux, cantPasajerosAux,
                                          horaDespegueAux, horaLlegadaAux
                                          );
            pEmployee = employee_newParametros(idVueloAux, idAvionAux, idPilotoAux,
                                               fechaAux, destinoAux,cantPasajerosAux,
                                               horaDespegueAux, horaLlegadaAux);

            if(pEmployee != NULL)
            {
                ll_add(pArrayListEmployee, pEmployee);
                retorno = 0;
            }
        }
    }
    return retorno;
}



int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{
    Employee* pEmployee;
    int retorno = -1;

    if(pFile != NULL)
    {
        while(!feof(pFile))
        {
            pEmployee = employee_new();
            fread(pEmployee,sizeof(Employee),1,pFile);
            ll_add(pArrayListEmployee,pEmployee);
        }
        retorno = 0;
    }
    return retorno;
}
