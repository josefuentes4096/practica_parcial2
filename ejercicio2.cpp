/**
 *    2)  Utilizando el vector de alumnos que programan se desea realizar un listado por consola con 
 * la información de contacto. Para esto la facultad dispone de un conjunto de datos de Alumnos ordenados 
 * por Legajo en forma ascendente,  que contiene:
 *     • Legajo (entero de 8 dígitos)
 *     • Apellido y Nombre (texto)
 *     • Email (texto)
 *     • Telefono (entero)
 * 
 * Realizar el codigo del procedimiento o función que reciba el vector de quienes programan y el vector 
 * de datos de alumnos e imprima el listado ordenado por apellido y nombre:
 * APELLIDO Y NOMBRE		  LEGAJO		EMAIL		TELEFONO
 *  
*/

#include <iostream>

using namespace std;

struct ALUMNO 
{
    string nombre;
    long legajo;
};

struct CONTACTO
{
    long legajo;
    string nombre;
    string email;
    long telefono;
};

void informacionContacto(ALUMNO vectorQuienesPrograman[], int& nTotal)
{
}

int main()
{

    return 0;
}