/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,facto,numero;
    i=1;
    facto=1;
    cout<<"Ingresar el numero"<<endl;
    cin>>numero;
    while(i<=numero)
    {
        facto=facto*i;
        i=i+1;
    }
    cout<<"el valor factorial de: "<<numero<<" es: "<<facto;
    return 0;
}
