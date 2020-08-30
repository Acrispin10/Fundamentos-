#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main ()
{
	int c,o;
	float t;
	cout<<"Bienvenido a Alepile Burguer"<<endl;
    cout<<"Este nuestro Menu disponible"<<endl;
    cout<<endl;
    cout<<"Producto                     Precio"<<endl;
    cout<<"......................................"<<endl;
    cout<<"1)Hamburguesa Simple          18Bs"<<endl;
    cout<<"2)Hamburguesa Primavera        20Bs"<<endl;
    cout<<"3)Hamburguesa Barbacoa         25Bs"<<endl;
    cout<<"4)Coca cola personal            5Bs"<<endl;
    cout<<"......................................"<<endl;
	cout<< "Opcion: ";
	cin>>o;
	switch (o)
	{
	case 1: cout<<"Cantidad: ";
		    cin>>c;
			t=c*3;
			break;
	case 2: cout<<"Cantidad: ";
		    cin>>c;
			t=c*5;
			break;
	case 3: cout<<"Cantidad: ";
		    cin>>c;
			t=c*2;
			break;
	case 4: cout<<"Cantidad: ";
		    cin>>c;
			t=c*2.5;
			break;
	case 0: cout<<"Salir ";
			break;

	default: cout<<"Error ";
	}
	cout<<"El total a pagar es: "<<t;
	getch();
}