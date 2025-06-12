/**
 * 3) Realizar un programa (diagrama o codificación)  que
 *         a. Le pida al usuario que ingrese por consola N números enteros y los almacene
 *         en un vector.
 *         b. Informe si los elementos cargados en el vector son “consecutivos ascendentes”
 * 
 * Ejemplo: Si  ingresa [9,10,11,12] se imprimirá “Consecutivos ascendentes”.
 * En cambio, si ingresa [1,4,3,7] imprimirá “No Consecutivos ascendentes”.
 * En cambio, si ingresa [-2, -1, 0, 1, 2] imprimirá “Consecutivos ascendentes”.
 * 
 * Ejecutar con:
 *      ejercicio3.exe < test_ejercicio3_ok.txt
 *      ejercicio3.exe < test_ejercicio3_err.txt
 * 
*/

#include <iostream>

using namespace std;

int main()
{
    const int MAXIMA_CANTIDAD_ELEMENTOS = 100;
    int cantidad_elementos;

    cout << "Ingrese cantidad de elemntos:" << endl;
    cin >> cantidad_elementos;

    int numeros[MAXIMA_CANTIDAD_ELEMENTOS];

    for (int i = 0; i < cantidad_elementos; i++)
    {
        cout << "Ingrese un número entero:" << endl;
        cin >> numeros[i];
    }

    int i;
    for (i = 0; i < cantidad_elementos; i++)
    {
        if (numeros[i] != numeros[0] + i)
        {
            cout << "No es consecutivo ascendente" << endl;
            break;
        }
    }

    if (i == cantidad_elementos)
    {
        cout << "Es consecutivo ascendente" << endl;
    }

    return 0;
}