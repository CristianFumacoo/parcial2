#include "LinkedList.h"

#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED

#define TAMNOMBRE 100


typedef struct
{
    int idVuelo;
    int idAvion;
    int idPiloto;
    int fecha;
    char destino;
    int cantPasajeros;
    int horaDespegue;
    int horaLlegada;
}Employee;



/** \brief Construye un nuevo empleado.
 *
 * \param  void
 * \return -NULL si no hay memoria.
 *         -Employee* si funciona correctamente.
 */
Employee* employee_new();



/** \brief Construye un nuevo empleado - carga los campos con datos.
 *
 * \param idStr char* contiene el id
 * \param nombreStr char* contiene el nombre
 * \param horasTrabajadasStr char* contiene el sueldo
 * \param sueldoStr char* contiene las horas trabajadas
 * \return -NULL si no hay memoria.
 *         -Employee* si funciona correctamente.
 */
Employee* employee_newParametros(char* idVuelo, char* idAvion, char* idPiloto,
                                 char* fecha, char* destino, char* cantPasajeros,
                                 char* horaDespegue, char* horaLlegada);



/** \brief Elimina un empleado.
 *
 * \param this Employee* empleado a eliminar
 * \return void
 */
void employee_delete(Employee* this);

/*********************************************************/

int employee_setIdVuelo(Employee* this,int* idVuelo);

int employee_setIdAvion(Employee* this,int* idAvion);

int employee_setIdPiloto(Employee* this,int* idPiloto);

int employee_setFecha(Employee* this,int* fecha);

int employee_setCantPasajeros(Employee* this,int* cantPasajeros);

int employee_setHoraDespegue(Employee* this,int* horaDespegue);

int employee_setHoraLlegada(Employee* this,int* horaLlegada);

int employee_setDestino(Employee* this,char* destino);

/***************************************************************************/

int employee_getIdVuelo(Employee* this,int* idVuelo);

int employee_getIdAvion(Employee* this,int* idAvion);

int employee_getIdPiloto(Employee* this,int* idPiloto);

int employee_getFecha(Employee* this,int* nombre);

int employee_getDestino(Employee* this,char* nombre);

int employee_getCantPasajeros(Employee* this,int* nombre);

int employee_getHoraDespegue(Employee* this,int* nombre);

int employee_getHoraLlegada(Employee* this,int* nombre);




/** \brief Ordena la lista de empleados.
 *
 * \param pArrayListEmployee LinkedList* Puntero a la lista de empleados.
 * \return int -   0 si funciona correctamente.
 *             -  -1 si no funciona correctamente.
 */
int employee_sortEmployee(LinkedList* pArrayListEmployee);



/** \brief Ordena la lista de empleados por sueldo.
 *
 * \param thisUno void* objeto generico uno
 * \param thisDos void* objeto generico dos
 * \return int -  -1 si funciona correctamente.
 *             -  0 si no funciona correctamente.
 */
int employee_ordenarPorSueldo(void* thisUno, void* thisDos);



/** \brief Ordena la lista de empleados por nombre.
 *
 * \param thisUno void* objeto generico uno
 * \param thisDos void* objeto generico dos
 * \return int -  -1 si funciona correctamente.
 *             -  0 si no funciona correctamente.
 */
int employee_ordenarPorNombre(void* thisUno, void* thisDos);



/** \brief Ordena la lista de empleados por horas trabajadas.
 *
 * \param thisUno void* objeto generico uno
 * \param thisDos void* objeto generico dos
 * \return int -  -1 si funciona correctamente.
 *             -  0 si no funciona correctamente.
 */
int employee_ordenarPorHoras(void* thisUno, void* thisDos);


#endif // employee_H_INCLUDED
