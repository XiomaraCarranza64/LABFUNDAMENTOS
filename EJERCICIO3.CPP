#include "iostream"
using namespace std;

bool bisiesto(int year)//devolvera un valor booleano 
{
     bool bisiesto ; 
    if (year%400==0)
    {
        bisiesto = true;
           
    }
    else if (year%4==0 && year%100!=0)
    {
        bisiesto= true ;
    }

    else 
    {
        bisiesto = false ; 
    }

    return bisiesto ;
}

int main()
{
    int year;  
    cout << endl << "A"<<(char)165<<"O BISIESTO"<< endl ;
    cout <<  "INGRESE UN A"<<(char)165<<"O: "; 
    cin >> year; 

    if (bisiesto(year)==true)// se hara la comparacion con el true y con el valor booleano que devuelva la funcion
    {
        cout <<"EL A"<<(char)165<<"O "<< year << " ES BISIESTO"<< endl ; 
    }

    else 
    {
        cout <<"EL A"<<(char)165<<"O "<< year << " NO ES BISIESTO"<< endl ;
    }
    
 }

