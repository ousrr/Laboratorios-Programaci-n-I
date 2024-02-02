#include <iostream>
#include <cmath>

using namespace std;
//--------------------------------------------------------------------------------------------------------------
// Declaraciones de funciones
void opevar();
void fun();
void primo();
void anio();
int menu();
//--------------------------------------------------------------------------------------------------------------
// Funcion para calcular la potencia
double calcularPotencia(float base, int exponente) {
    if (exponente == 0) {
        return 1.0;
    } else if (exponente < 0) {
        return 1.0 / pow(base, -exponente);
    } else {
        return pow(base, exponente);
    }
}
//**************************************************************************************************************
// Funcion principal main
int main() {
    int opcion;
// Impelmentacion de bucle para evitar salir del programa.
    do {
        system("cls");

        opcion = menu();

        switch (opcion) {
            case 1:
                opevar();
                break;
            case 2:
                fun();
                break;
            case 3:
                primo();
                break;
            case 4:
                anio();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 5); // 5 casos

    return 0;
}
//**************************************************************************************************************
// Funcion de menu
int menu() {
    int x;

    cout << "--------------MENU DE OPCIONES--------------" << endl;
    cout << "Seleccione una de las siguientes opciones:" << endl;
    cout << " 1. Operadores y variables" << endl;
    cout << " 2. Funciones" << endl;
    cout << " 3. Determinacion de numeros primos" << endl;
    cout << " 4. Verficacion de anio bisiesto" << endl;
    cout << " 5. SALIR" << endl;
    cout << endl;

    cout << "Elija una opcion: ";
    cin >> x;

    return x; //x es la variable que escogeremos y dado el retorno nos enviara directo a la funcion que se desea utilizar
}
//**************************************************************************************************************
// Funciones
void opevar() {
    system("cls");

    int num1, num2;
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    int sum = num1 + num2;
    int rest = num1 - num2;
    int mult = num1 * num2;

    float div;
    if (num2 != 0) {
        div = static_cast<float>(num1) / num2;
    } else {
        cout << "No se puede dividir entre cero, ERROR." << endl;
        return; // No es necesario cerrar el programa después del error, simplemente retorna.
    }

    bool igual = num1 == num2;
    bool dif = num1 != num2;
    bool mayor = num1 > num2;
    bool menor = num1 < num2;

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

    system("pause");
}
//--------------------------------------------------------------------------------------------------------------
void fun() {
    system("cls");

    float base;
    int exponente;
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    float resultado = calcularPotencia(base, exponente);
    cout << "El resultado de " << base << "^" << exponente << " es: " << resultado << endl;

    system("pause");
}
//--------------------------------------------------------------------------------------------------------------
void primo() {
    system("cls");

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    bool esPrimo = true;
    if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    system("pause");
}
//--------------------------------------------------------------------------------------------------------------
void anio() {
    system("cls");

    int year;
    cout << "Ingrese un anio: ";
    cin >> year;

    bool esBisiesto = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (esBisiesto) {
        cout << year << " es un anio bisiesto." << endl;
    } else {
        cout << year << " no es un anio bisiesto." << endl;
    }

    system("pause");
}


