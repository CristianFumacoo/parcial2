#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Employee.h"


Employee* employee_new()
{
    Employee* newEmployee;
    newEmployee = (Employee*)malloc(sizeof(Employee));

    if(newEmployee != NULL)
    {
        newEmployee->idVuelo = 0;
        newEmployee->idAvion = 0;
        newEmployee->idPiloto = 0;
        newEmployee->fecha = 0;
        strcpy(newEmployee->destino, " ");
        newEmployee->cantPasajeros = 0;
        newEmployee->horaDespegue = 0;
        newEmployee->horaLlegada = 0;
    }

    return newEmployee;
}



Employee* employee_newParametros(char* idVueloStr, char* idAvionStr, char* idPilotoStr,
                                 char* fechaStr, char* destinoStr, char* cantPasajerosStr,
                                 char* horaDespegueStr, char* horaLlegadaStr)
{
    Employee* newEmployee;
    newEmployee = employee_new();

    int auxIdVuelo;
    int auxIdAvion;
    int auxIdPiloto;
    int auxHoraDespegue;
    int auxHoraLlegada;
    int auxFecha;
    int auxCantPasajeros;

    auxIdVuelo= atoi(idVueloStr);
    auxIdAvion= atoi(idAvionStr);
    auxIdPiloto= atoi(idPilotoStr);
    auxHoraDespegue= atoi(horaDespegueStr);
    auxHoraLlegada= atoi(horaLlegadaStr);
    auxFecha= atoi(fechaStr);
    auxCantPasajeros= atoi(cantPasajerosStr);

    if(newEmployee != NULL && idVueloStr != NULL && idAvionStr != NULL && idPilotoStr != NULL
       && fechaStr != NULL && destinoStr != NULL, cantPasajerosStr != NULL
       && horaDespegueStr != NULL && horaLlegadaStr != NULL)
    {
        employee_setDestino(newEmployee, destinoStr);
        employee_setIdVuelo(newEmployee, idVueloStr);
        employee_setIdAvion(newEmployee, idAvionStr);
        employee_setIdPiloto(newEmployee, idPilotoStr);
        employee_setFecha(newEmployee, fechaStr);
        employee_setCantPasajeros(newEmployee, cantPasajerosStr);
        employee_setHoraDespegue(newEmployee, horaDespegueStr);
        employee_setHoraLlegada(newEmployee, horaLlegadaStr);
    }

    return newEmployee;
}

void employee_delete(Employee* this)
{
    if(this!=NULL)
    {
        free(this);
    }
}


/**************************SETS ID**********************************/
int employee_setIdVuelo(Employee* this,int* idVuelo)
{
    int retorno = -1;

    if(this != NULL)
    {
        if(idVuelo >= 0)
        {
            this->idVuelo = idVuelo;
            retorno = 0;
        }
    }
    return retorno;
}

int employee_setIdAvion(Employee* this,int* idAvion)
{
    int retorno = -1;

    if(this != NULL)
    {
        if(idAvion >= 0)
        {
            this->idAvion = idAvion;
            retorno = 0;
        }
    }
    return retorno;
}

int employee_setIdPiloto(Employee* this,int* idPiloto)
{
    int retorno = -1;

    if(this != NULL)
    {
        if(idPiloto >= 0)
        {
            this->idPiloto = idPiloto;
            retorno = 0;
        }
    }
    return retorno;
}
/****************************SETS ID**********************************/


/**************************GETS ID************************************/
int employee_getIdPiloto(Employee* this,int* idPiloto)
{
    int retorno = -1;

    if(this!=NULL && idPiloto !=NULL)
    {
        *idPiloto = this->idPiloto;
        retorno = 0;
    }
    return retorno;
}

int employee_getIdAvion(Employee* this,int* idAvion)
{
    int retorno = -1;

    if(this!=NULL && idAvion !=NULL)
    {
        *idAvion = this->idAvion;
        retorno = 0;
    }
    return retorno;
}

int employee_getIdVuelo(Employee* this,int* idVuelo)
{
    int retorno = -1;

    if(this!=NULL && idVuelo !=NULL)
    {
        *idVuelo = this->idVuelo;
        retorno = 0;
    }
    return retorno;
}
/****************************GETS ID***************************************/


/********************FECHA*******************************/
int employee_setFecha(Employee* this,int* fecha)
{
    int retorno=-1;

    if(this!=NULL && fecha!=NULL)
    {
        strcpy(this->fecha,fecha);
        retorno=0;
    }
    return retorno;
}

int employee_getFecha(Employee* this,int* fecha)
{
    int retorno=-1;

    if(this!=NULL && fecha!=NULL)
    {
        strcpy(fecha,this->fecha);
        retorno=0;
    }
    return retorno;
}
/***********************FECHA******************************/

/************************DESTINO******************************/
int employee_setDestino(Employee* this,char* destino)
{
    int retorno = -1;

    if(this != NULL)
    {
        if(destino >= 0)
        {
            this->destino = destino;
            retorno = 0;
        }
    }
    return retorno;
}

int employee_getDestino(Employee* this,char* destino)
{
    int retorno = -1;

    if(this != NULL && destino != NULL)
    {
        *destino = this->destino;
        retorno = 0;
    }
    return retorno;
}
/*********************DESTINO********************************/

/*************************CANT*******************************/
int employee_setCantPasajeros(Employee* this,int* cantPasajeros)
{
    int retorno=-1;

    if(this!=NULL)
    {
        this->cantPasajeros = cantPasajeros;
        retorno=0;
    }
    return retorno;
}

int employee_getCantPasajeros(Employee* this,int* cantPasajeros)
{
    int retorno = -1;

    if(this != NULL && cantPasajeros != NULL)
    {
        *cantPasajeros = this->cantPasajeros;
        retorno = 0;
    }
    return retorno;
}
/**************************CANT***********************/

/*********************HORA DESPEGUE*******************/
int employee_setHoraDespegue(Employee* this,int* horaDespegue)
{
    int retorno=-1;

    if(this!=NULL)
    {
        this->horaDespegue = horaDespegue;
        retorno=0;
    }
    return retorno;
}

int employee_gethoraDespegue(Employee* this,int* horaDespegue)
{
    int retorno = -1;

    if(this != NULL && horaDespegue != NULL)
    {
        *horaDespegue = this->horaDespegue;
        retorno = 0;
    }
    return retorno;
}
/***********************HORA DESPEGUE**************************/


/*********************HORA LLEGADA***********************************/
int employee_setCantPasajeros(Employee* this,int* cantPasajeros)
{
    int retorno=-1;

    if(this!=NULL)
    {
        this->cantPasajeros = cantPasajeros;
        retorno=0;
    }
    return retorno;
}

int employee_getCantPasajeros(Employee* this,int* cantPasajeros)
{
    int retorno = -1;

    if(this != NULL && cantPasajeros != NULL)
    {
        *cantPasajeros = this->cantPasajeros;
        retorno = 0;
    }
    return retorno;
}
/**********************HORA LLEGADA*******************************/

int employee_sortEmployee(LinkedList* pArrayListEmployee)
{
    int opcion;
    int retorno = -1;

    if(pArrayListEmployee != NULL)
    {
        printf("\n\n OPCIONES:");
        printf("\n (1) Ordernar lista de empleados por nombre.");
        printf("\n (2) Ordenar lista de empleados por sueldo.");
        printf("\n (3) Ordenar lista de empleados por horas trabajadas.");
        printf("\n (4) Cancelar.");
        printf("\n\n Opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            printf("\nLa lista se esta ordenando...\n\n");
            ll_sort(pArrayListEmployee, employee_ordenarPorNombre, 1);
            break;

        case 2:
            printf("\nLa lista se esta ordenando...\n\n");
            ll_sort(pArrayListEmployee, employee_ordenarPorSueldo, 1);
            break;

        case 3:
            printf("\nLa lista se esta ordenando...\n\n");
            ll_sort(pArrayListEmployee, employee_ordenarPorHoras, 1);
            break;

        case 4:
            opcion=4;
            printf("\nCancelando...\n\n");
            break;

        default:
            printf("Error. Usted eligio una opcion invalida.\n");
        }

        retorno= 0;
    }
    return retorno;
}



int employee_ordenarPorSueldo(void* thisUno, void* thisDos)
{
    int sueldoUno;
    int sueldoDos;
    int retorno = 0;

    employee_getSueldo(thisUno, &sueldoUno);
    employee_getSueldo(thisDos, &sueldoDos);

    if(sueldoUno > sueldoDos)
    {
        retorno = 1;
    }
    else if(sueldoUno < sueldoDos)
    {
        retorno = -1;
    }

    return retorno;
}



int employee_ordenarPorNombre(void* thisUno, void* thisDos)
{
    char nombreUno[50];
    char nombreDos[50];
    int retorno = 0;

    employee_getNombre(thisUno, nombreUno);
    employee_getNombre(thisDos, nombreDos);

    if(strcmp(nombreUno, nombreDos) > 0)
    {
        retorno = 1;
    }
    else if(strcmp(nombreUno, nombreDos) < 0)
    {
        retorno = -1;
    }

    return retorno;
}



int employee_ordenarPorHoras(void* thisUno, void* thisDos)
{
    int horasUno;
    int horasDos;
    int retorno = 0;

    employee_getHorasTrabajadas(thisUno, &horasUno);
    employee_getHorasTrabajadas(thisDos, &horasDos);

    if(horasUno > horasDos)
    {
        retorno = 1;
    }
    else if(horasUno < horasDos)
    {
        retorno = -1;
    }

    return retorno;
}
