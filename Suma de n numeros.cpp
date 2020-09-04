/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float n,i,suma;
    cout<<"Ingrese cuantos numeros quieres sumar"<<endl;
    cin>> n;
    i=1;
    suma=0;
    while (n>=i)
    {
    suma=suma+i;
    i=i+1;
    }
    cout<<"La suma de los primeros "<<n<<" numeros naturales es de :"<<suma<<endl;
    

    return 0;
}
