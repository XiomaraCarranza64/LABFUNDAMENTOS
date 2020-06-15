#include "iostream"
using namespace std;
int formatohora (int hora , int min, int seg )
{

if (0<=hora && hora<=9 && 0<=min && min<=9 && 0<=seg && seg<=9)
{
cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<"0"<<hora<<":0"<< min << ".0"<<seg << endl ; 
}
else if ( 0<=hora && hora<=9 && 0<= min && min<=9 && seg>9)
{
 cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<"0"<<hora<<":0"<< min << "."<<seg << endl; 
}

else if ( min>9 && 0<=hora && hora<=9 && 0<=seg && seg<=9)
{
  cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<"0"<<hora<<":"<< min << ".0"<<seg << endl;
}

else if (0<=hora && hora<=9 && min>9 && seg>9)
{
cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<"0"<<hora<<":"<< min << "."<<seg << endl;
}

else if (hora>9 && 0<=min && min<=9 && 0<=seg && seg<=9)
{
  cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<""<<hora<<":0"<< min << ".0"<<seg << endl;
}

else if (hora>9 && 0<=min && min<=9 && seg>9)
{
  cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<""<<hora<<":0"<< min << "."<<seg << endl;
}

else if (hora>9 && min>9 &&  0<=seg && seg<=9)
{
  cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<""<<hora<<":"<< min << ".0"<<seg << endl;

}
else 
{
  cout << "HORA FORMATO 24 HORAS" <<endl ;
cout <<""<<hora<<":"<< min << "."<<seg << endl;

  }

return 0;  
}


int horasconsegundo (int *hora , int *min, int *seg )
{
*seg = *seg + 1 ;  
if (*seg == 60)
{
*seg = 0; 
*min= *min+ 1;  
}
if (*min ==60)
{
   *min = 0 ;
  *hora = *hora + 1 ; 

}

if (*hora== 24)
{
  *hora = 0 ; 
}

return 0 ; 


}

int main()

{
    int hora,min,seg ; 

    cout << endl << "HORA EN FORMATO 24 HORAS"<< endl << "ESTE PROGRAMA GENERARA LA MISMA HORA INGRESADA PERO UN SEGUNDO DESPUES"<<endl ; 
    cout <<endl <<  "DIGITE LA HORA EN FORMATO DE 24 HORAS(del 0 a 23): ";
    cin >> hora; 
    cout <<endl <<"MINUTOS: "; 
    cin >> min ; 
    cout <<  endl << "SEGUNDOS: "; 
    cin >> seg ; 

    while (hora<0 || hora>24)
    { 
        cout <<endl << "SU HORA ES INVALIDA" << endl ;
        cout << "DIGITE LA HORA EN FORMATO DE 24 HORAS: ";
        cin >> hora; 
        cout <<endl <<"MINUTOS: "; 
        cin >> min ; 
        cout <<  endl << "SEGUNDOS: "; 
        cin >> seg ;  

    }

    while (min<0||min>59)
    {
      cout <<endl << "SU MINUTO ES INVALIDO" << endl ;
        cout << "DIGITE LA HORA EN FORMATO DE 24 HORAS: ";
        cin >> hora; 
        cout <<endl <<"MINUTOS: "; 
        cin >> min ; 
        cout <<  endl << "SEGUNDOS: "; 
        cin >> seg ;    
    }
   
    while (seg<0||seg>59)
    {
  cout <<endl << "SU SEGUNDO ES INVALIDO" << endl ;
  cout << "DIGITE LA HORA EN FORMATO DE 24 HORAS: ";
        cin >> hora; 
        cout <<endl <<"MINUTOS: "; 
        cin >> min ; 
  cout <<  endl << "SEGUNDOS: "; 
        cin >> seg ;  
    }

    horasconsegundo(&hora,&min,&seg); 
    formatohora (hora , min, seg ); 

  }




