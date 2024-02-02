#include <iostream>

using namespace std;

//--------------------------------------------------------------------------------------------------------------
// Funcion para verificar si un numero es primo
// La funcion retornara un valor Booleano (en caso de ser primo true/ en caso de no ser primo false)

bool esPrimo(int num) {
    if (num <= 1) {
        return false; // 0 y 1 no son primos po lo tanto la condicion los incluye y retorna un valor falso
    }

    // Procedimiento para comprobar la divisibilidad por numeros desde 2 hasta la raíz cuadrada de num
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // No es primo, ya que es divisible por i
        }
    }

    return true; // Es primo
}
//--------------------------------------------------------------------------------------------------------------
int main() {
    //Declarion de variable
    int num;
	// Solicitud de variable
    cout << "Ingrese un numero: ";
    cin >> num;

    // Lamar a la funcion esPrimo
    // Mostrando resultado de la funcion esPrimo
    if (esPrimo(num)) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    return 0; // Final del programa
}

