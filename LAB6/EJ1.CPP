#include "iostream"
using namespace std; 

int maxdivisor(int mayor, int menor)
{
    int maxdiv;
    int residuo = mayor%menor; 
    while (residuo>0)
    {
        mayor = menor ; 
        menor = residuo ; 
        residuo = mayor%menor ; 
    }
    maxdiv= menor ; 
    return maxdiv;

}

int main()
{
    int nummayor , nummenor;

    cout << endl << "MAXIMO COMUN DIVISOR" << endl<<endl; 
    cout << "Digite Numero Mayor: ";
    cin >> nummayor ; 
    cout << "Digite Numero Menor: "; 
    cin >> nummenor; 
    cout << endl ; 
    
    while(nummayor < nummenor)
    {
        cout << endl << "Ingrese primero el numero MAYOR y despues el MENOR"<< endl<< endl  ; 
        cout << "Digite Numero Mayor: ";
        cin >> nummayor ; 
        cout << "Digite Numero Menor: "; 
        cin >> nummenor;
    }

   cout << "EL MAXIMO COMUN DIVISOR ES: " <<  maxdivisor(nummayor,nummenor) << endl << endl ;
}





