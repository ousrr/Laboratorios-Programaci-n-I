#include <iostream>
#include <cmath> // Biblioteca para la función pow()

using namespace std;

//--------------------------------------------------------------------------------------------------------------
// Funcion para calcular la potencia
double calcularPotencia(float base, int exponente) {
    //	Condicion en de exponente cero
    if (exponente == 0) {
        return 1.0;
    }
    // Condicion en caso de exponente negativo
    else if (exponente < 0) {
        return 1.0 / pow(base, -exponente);
    }
    // Potencia normal (sin exponente negativo o cero)
    else {
        return pow(base, exponente);
    }
}
//--------------------------------------------------------------------------------------------------------------

int main() {
    //Declarion de variables
    float base;
    int exponente;
	// Solicitud de variables 
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // Llamar a la funcion calcularPotencia 
    float resultado = calcularPotencia(base, exponente);
	// Mostrando resultado de la funcion calcularPotencia
    cout << "El resultado de " << base << "^" << exponente << " es: " << resultado << endl;

    return 0; // Final del programa
}

