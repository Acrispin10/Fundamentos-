// menu.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
   int a, b, r, opcion;
   cout << "Ingrese a: " ;
   cin >> a;
   cout << "Ingrese b: " ;
   cin >> b;
   cout << endl;
   do{
   cout << "1.- Suma" << endl;
   cout << "2.- Resta" << endl;
   cout << "3.- Producto" << endl;
   cout << "4.- División" << endl;
   cout << "0.- Salir" << endl;
   cout << "Elige una opción: " ;
   cin >> opcion;
   switch (opcion) {
	    case 1: r = a + b; break;
	    case 2: r = a - b; break;
	    case 3: r = a * b; break;
	    case 4: r = a / b; break;
		case 0: cout << "Salir";break;
	    default: cout << "Opcion invalida" << endl;
   }
   cout << "El resultado es " << r << endl;
   }while (opcion!=0);
   return 0;
}