/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

int main()
{
   int cantidad,opcion;
   float total;
  cout<<"Bienvenido a Alepile Burguer"<<endl;
  cout<<"Este nuestro Menu disponible"<<endl;
  cout<<endl;
  cout<<"Producto                     Precio"<<endl;
  cout<<"......................................"<<endl;
  cout<<"a)Hamburguesa Simple          18Bs"<<endl;
  cout<<"b)Hamburguesa Primavera        20Bs"<<endl;
  cout<<"c)Hamburguesa Barbacoa         25Bs"<<endl;
  cout<<"Todas vienen con papas"<<endl;
  cout<<"d)Papas extra                   2Bs"<<endl;
  cout<<"e)Coca cola personal            5Bs"<<endl;
  cout<<"......................................"<<endl;
  cout<<"Opcion";
  cin>>opcion;
  switch (opcion)
  {
      case 1: cout<<"Ingrese Cantidad"<<endl;
              cin>>cantidad;
              total=cantidad*3;
              break;
      case 2: cout<<"Ingrese Cantidad"<<endl;
              cin>>cantidad;
              total=cantidad*3;
              break;
      case 3: cout<<"Ingrese Cantidad"<<endl;
              cin>>cantidad;
              total=cantidad*2;
              break;
      case 4: cout<<"Ingrese Cantidad"<<endl;
              cin>>cantidad;
              total=cantidad*2.5;
              break;
      case 0: cout<<"Salir"<<endl;
              break;
      default: cout<<"Error no existe la opcion"<<endl;
      break;
  }  
  cout<<"El total es: "<<total;
}
