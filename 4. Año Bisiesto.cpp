#include <iostream>

using namespace std;

//--------------------------------------------------------------------------------------------------------------
// Funcion que verificara si un a�o es bisiesto
bool esBisiesto(int year) {
	
    // Un a�o solo es bisiesto si se cumple lo siguiente, es divisible por 4, pero no por 100 a menos que tambi�n sea divisible por 400.
    //condicion con retorno booleano
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

//--------------------------------------------------------------------------------------------------------------

int main() {
    //Declaracion de variables
    int year;
	// Solicitud de varibles
    cout << "Ingrese un anio: ";
    cin >> year;

    // Llamado a la funcion esBisiesto
    // Mostrando resultado de la funcion esBisiesto
    if (esBisiesto(year)) {
        cout << year << " es un anio bisiesto." << endl;
    } else {
        cout << year << " no es un anio bisiesto." << endl;
    }

    return 0; // Final del programa
}

