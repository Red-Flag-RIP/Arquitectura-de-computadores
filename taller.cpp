/*Sebastian Zapata Ruiz - Arquitectura de computadores - Grupo 1
*/
#include<iostream>
#include <vector>
using namespace std;
int multiplication(int n, int m)
{
    int r=0;
    for(int i=0;i<m;i++)
    {
            r=r+n;
    }
    return r;
}

int potency(int n,int m)
{
    int r=1;
    for(int i=0;i<m;i++)
    {
           r=r*multiplication(n,1);
    }
    return r;
} 

int pol(int x ,int k[], int n)
{
    int r=0;
    for(int i=n;i>=0;i--)
    {
            r=r+multiplication(k[i],potency(x,i));
    }
    return r;
}

int division(int n, int m)
{
    int r=n,i=0;
    for(i;r>0;i++)
    {
            r=r-m;
    }
    return i;
}

int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
           f=f*i;
    }
    return f;
}


//main

int main()
{
    int k[3]={4,2,3};
    cout<<"llamada a funcion multiplication 6*6 ==> "<<multiplication(6,6)<<endl;
    cout<<"llamada a funcion potency 2^4 ==> "<<potency(2,4)<<endl;
    cout<<"llamada a funcion polinomio con x=1, k(4,2,3), grado=2 ==> "<<pol(1,k,2)<<endl;
    cout<<"llamada a funcion division 25/5 ==> "<<division(25,5)<<endl;
    cout<<"llamada a funcion factorial 5! ==> "<<factorial(5)<<endl;
    system("pause");
}
