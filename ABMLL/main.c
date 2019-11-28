#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "perritos.h"

int main()
{
    int option;
    int idMax;
    LinkedList* listaPerritos;
    do
        {
        system("cls");
        printf("1. Cargar los datos del g.\n");
        printf("2. Darle de alta al perrito.\n");
        printf("3. Mostrar mayores de 45 dias.\n");
        printf("4. Mostrar solo perros hombres.\n");
        printf("5. Mostrar solo perros callejeros.\n");
        printf("Ingresa la opcion: ");
        fflush(stdin);
        scanf("%d", &option);

        switch(option)
        {
            /*case 1:

                break;*/
            case 2:
                agregarPerrito(listaPerritos,idMax);
                idMax++;
                break;
            /*case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;
            case 8:

                break;
            case 9:

                break;*/
        }
    }while(option != 99);

    return 0;
}
