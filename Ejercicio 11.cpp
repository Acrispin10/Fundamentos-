// Ejercicio 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main()
{
    int p;
    cout<<"Ingrese el peso"<<endl;
    cin>>p;
    if (p<=0)
     cout<<"Error";
    else
       if (p<50)
         cout<<"El costo es: 1.5"<<endl;
       else
         if (p<=100)
            cout<<"El costo es: 4"<<endl;
         else
          if(p<=200)
            cout<<"El costo es: 6"<<endl;
          else
            if (p<=350)
              cout<<"El costo es: 10.5"<<endl;
            else
             if (p<=500)
               cout<<"El costo es: 15"<<endl;
             else
                cout<<"no se puede enviar la carta"<<endl;
getch();
}




