#include <iostream>

using namespace std;

int main() {
	
//--------------------------------------------------------------------------------------------------------------	
//Declarion de variables
    int num1, num2;
	// Solucitud de variables
   cout << "Ingrese el primer numero entero: ";
   cin >> num1;
   cout << "Ingrese el segundo numero entero: ";
   cin >> num2;
//--------------------------------------------------------------------------------------------------------------
//Declarion de variables

    // Operaciones aritméticas básicas
    int sum = num1 + num2;
    int rest = num1 - num2;
    int mult = num1 * num2;

    // Division con condicion en 0
    float div;
    if (num2 != 0) {
        div = static_cast<float>(num1) / num2; //Generador de divisiones con resultados decimales
    } else {
        cout << "No se puede dividir ente cero, ERROR." << endl;
        return 1; // El programa se simplemente retorna.
    }

    // Operadores de relacion ==, !=,>,<,>=,<=
    bool igual = num1 == num2;
    bool dif = num1 != num2;
    bool mayor = num1 > num2;
    bool menor = num1 < num2;

    // Impresion de resultados en pantalla
    cout << "\nRESULTADOS:" << endl;
	cout << "Suma: " << sum << endl;
    cout << "Resta: " << rest << endl;
    cout << "Multiplicacion: " << mult << endl;
    cout << "Division: " << div << endl;

    cout << "\nCOMPARACIONES ENTRE VARIABLES:" << std::endl;
    cout << num1 << " es igual a " << num2 << "? " << boolalpha << igual << endl;
    cout << num1 << " es diferente de " << num2 << "? " << boolalpha << dif << endl;
    cout << num1 << " es mayor que " << num2 << "? " << boolalpha << mayor << endl;
    cout << num1 << " es menor que " << num2 << "? " << boolalpha << menor << endl;

    return 0; // Final del programa
}
