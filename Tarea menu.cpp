#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//****************************************************************************************************************************
// Declaraciones de funciones

void par();
void bisiesto();
void igualdad();
void mayor();
void calificacion();
int menu();

//****************************************************************************************************************************
//voids

void par() { 
	system("cls");
	
	int num;

    // Solicita al usuario que ingrese un número
    cout << "Ingrese un numero: ";
    cin >> num;

    // Verificacion de número 
    if (num % 2 == 0) {
        cout << num << " El numero ingresado es un numero par." << endl;
    } else {
        cout << num << " El numero ingresado no es un numero par." << endl;
    }

    system("pause");
}

//-----------------------------------------------------------------------------------------------------------------------------
void bisiesto() {
    system("cls");
    
	int year, anio;
	
	// Solicita al usuario que ingrese el año
	cout << "Ingrese el anio que desea saber si es bisiesto: ";
    cin >> anio;

    // Solicita al usuario que ingrese los dias del año
    cout << "Ingrese la cantidad de dias que tiene el anio que desea saber si es bisiesto: ";
    cin >> year;

    // Verificacion de año 
    if (year == 366) {
        cout << anio << " El anio ingresado es bisiesto." << endl;
    } else {
        cout << anio << " El anio ingresado no es bisiesto." << endl;
    }

    system("pause");
}
//-----------------------------------------------------------------------------------------------------------------------------
void igualdad(){
	system("cls");
	
	 float num1, num2;

    // Solicita al usuario que ingrese dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Verificacion si los números son iguales
    if (num1 == num2) {
        cout << "Los numeros son iguales." << endl;
    } else {
        cout << "Los numeros no son iguales." << endl;
    }

	system ("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------------
void mayor(){
	system("cls");
	
	int edad;

    // Solicita al usuario que ingrese la edad de la persona
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Verificacion de edad 
    if (edad >= 18) {
        cout << " Usted es mayor de edad." << endl;
    } else {
        cout << " Usted no es mayor de edad." << endl;
    }

    system("pause");
		
}

//-----------------------------------------------------------------------------------------------------------------------------
void calificacion(){
	system("cls");

	int calificacion;

    // Solicita al usuario que ingrese la calificación
    cout << "Ingrese la calificacion del estudiante: ";
    cin >> calificacion;

    // Verificacion si el estudiante aprobó el examen
    if (calificacion >= 60) {
        cout << "El estudiante ha aprobado el examen." << endl;
    } else {
        cout << "El estudiante no ha aprobado el examen." << endl;
    }

    system("pause");

}

//****************************************************************************************************************************
// Función principal

int main() {
    int opcion;

    do {
        system("cls");

        opcion = menu();

        switch (opcion) {
            case 1:
                par();
                break;
            case 2:
                bisiesto();
                break;
            case 3:
                igualdad();
                break;
            case 4:
                mayor();
                break;
            case 5:
                calificacion();
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 6);

    return 0;
}

//****************************************************************************************************************************
// Función de menú

int menu() {
    int x;

    cout << "--------------Menu de opciones--------------" << endl;
    cout << "Seleccione una de las siguientes opciones:" << endl;
    cout << " 1. VERIFICACION DE NUEMERO PAR" << endl;
    cout << " 2. DETERMINACION DE ANIO BISIESTO" << endl;
    cout << " 3. DETERMINACION DE NUMEROS IGUALES" << endl;
    cout << " 4. VERIFICACION DE EDAD (MAYOR DE EDAD O MENOR DE EDAD)" << endl;
    cout << " 5. EVALUACION DE APROBACION DE EXAMEN " << endl;
    cout << " 6. SALIR" << endl;
    cout << endl;

    cout << "Elija una opcion: ";
    cin >> x;

    return x;
}
