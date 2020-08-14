/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,s,r,m,d,mo;
    cout<<"Algoritmo que suma, resta, nultiplicacion, division y saca modulo"<<endl;
    cout<<"ingrese el primer numero"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>b;
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    mo=a%b;
    cout<<"La suma es "<<s<<endl;
    cout<<"La resta es "<<r<<endl;
	cout<<"La multiplicacion es "<<m<<endl;
	cout<<"La division es "<<d<<endl;
    cout<<"el modulo es "<<mo<<endl;

    return 0;
}
