/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>

using namespace std;

int main()
{
    float j,d,s;
    cout<<"Ingrese la cantidad de días:";
    cin>> d;
    cout<<"Ingrese el monto de jornada:";
    cin>>j;
    s=d*j;
    cout<< "El salario es:"<<s;
    

    return 0;
}