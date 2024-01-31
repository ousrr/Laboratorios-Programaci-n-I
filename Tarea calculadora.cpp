#include <iostream>
using namespace std;

float valor1 = 0;
float valor2 = 0;
float resultado = 0;

void suma();
void resta();
void multiplicacion();
void division();

int main() {
    suma();
    resta();
    multiplicacion();
    division();
    
    return 0;
}

void suma() {
    // instrucciones de programación para calcular la suma
	cout <<"Ingrese el primer valor"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo valor"<< endl;
    cin>> valor2;
    resultado = (valor1 + valor2);
    cout << "Suma: " << resultado << endl;
}

void resta() {
    // instrucciones de programación para calcular la resta
    cout <<"Ingrese el primer valor"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo valor"<< endl;
    cin>> valor2;
    resultado = (valor1 - valor2);
    cout << "Resta: " << resultado << endl;
}

void multiplicacion() {
    // instrucciones de programación para calcular la multiplicacion
    cout <<"Ingrese el primer valor"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo valor"<< endl;
    cin>> valor2;
    resultado = (valor1 * valor2);
    cout << "Multiplicacion: " << resultado << endl;
}

void division() {
    // instrucciones de programación para calcular la division
    cout <<"Ingrese el primer valor"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo valor"<< endl;
    cin>> valor2;
    if (valor2 != 0) {
        resultado = (valor1 / valor2);
        cout << "Division: " << resultado << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }
}
