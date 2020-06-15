#include "iostream"
#include "math.h"
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

int validacion(bool febrero , int dia , int mes, int year)
{
   int verificador=1 ;
   if (febrero==true&&mes==2&&(dia>=30||dia<=0))
{
    cout <<"LA FECHA BRINDADA ES INVALIDA"<< endl ; 
    verificador = 0; 
}
else if (febrero ==false&&mes==2&&(dia>=29||dia<=0))
{
    cout <<"LA FECHA BRINDADA ES INVALIDA"<< endl ; 
    verificador = 0; 
}
else if ((mes==1||mes ==3||mes==5||mes==7||mes==8||mes==10||mes==12)&&(dia>=32||dia<=0))
{
   cout <<"LA FECHA BRINDADA ES INVALIDA"<< endl ; 
    verificador = 0; 
}
else if ((mes==4||mes ==6||mes==9||mes==11)&&(dia>=31||dia<=0))
{
    cout <<"LA FECHA BRINDADA ES INVALIDA"<< endl ; 
    verificador = 0;
}

if (mes<=0||mes>=13)
{
  cout <<"LA FECHA BRINDADA ES INVALIDA"<< endl ; 
    verificador = 0;  
}
 
 return verificador ; 
}

int formatoyear(int *year,int newyear)
{
    int i =0 , contador=0 , exponente , mantnewyear1,mantnewyear2, suma  , formato , diez , limitante  ;
    mantnewyear1=newyear; 
    mantnewyear2=newyear;
   while (mantnewyear1>0)//
   {
      mantnewyear1=mantnewyear1 /10;//199 19 1 0
      i++;//1 2 3 4
   }

   while (contador<2)//
    {
     mantnewyear2 =mantnewyear2/10; //199 19 
      contador ++; //1 2
    }

 if (mantnewyear2%10==0)
  {
  i=i-1; //3
   exponente =pow(10,i);
   *year=*year%exponente ; 
  }

else 
{
    
    
     *year= *year%100; 
  }



   return 0 ;
}

int agregarundia(bool febrero , int *dia , int *mes, int *year )
{
    *dia = *dia + 1 ;
 if ((*mes==1||*mes ==3||*mes==5||*mes==7||*mes==8||*mes==10||*mes==12)&&(*dia == 32))
{  
      
        *dia = 1; 
        *mes= *mes+1;  
         
     if (*mes==13)
        {
           *mes = 1 ;
           *year = *year + 1 ; 
        }
}
else if (*mes==2)
{

   if (febrero==true&&*dia==30)
        {  
            *dia = 1; 
            *mes= *mes+1;  
        }
  else if (febrero==false&&*dia==29)
         {
            *dia = 1; 
            *mes= *mes+1;  
         } 
       
}
else if ((*mes==4||*mes ==6||*mes==9||*mes==11)&&(*dia==31))
{
          *dia = 1; 
         *mes= *mes+1;   

         
}

if (*year==100)
{
  *year = 0 ;
}

return 0 ; 
}


int formatodia(int dia , int mes , int year)
{
if (0<=dia && dia<=9 && 0<=mes && mes<=9 && 0<=year && year<=9)
{
cout << "UN DIA DESPUES" <<endl ;
cout <<"0"<<dia <<"/0"<< mes<< "/0"<<year<< endl ; 
}
else if ( 0<=dia&& dia<=9 && 0<= mes && mes<=9 && year>9)
{
 cout << "UN DIA DESPUES" <<endl ;
cout <<"0"<<dia <<"/0"<< mes<< "/"<<year << endl; 
}

else if ( 0<=dia && dia<=9 &&mes>9&& 0<=year && year<=9)
{
  cout << "UN DIA DESPUES" <<endl ;
cout <<"/0"<<dia<<"/"<< mes << "/0"<<year<< endl;
}

else if (0<=dia && dia<=9 && mes>9 && year>9)
{
cout << "UN DIA DESPUES" <<endl ;
cout <<"0"<<dia<<"/"<< mes << "/"<<year << endl;
}

else if (dia>9 && 0<=mes && mes<=9 && 0<=year&& year<=9)
{
  cout << "UN DIA DESPUES" <<endl ;
cout <<""<<dia<<"/0"<< mes<< "/0"<<year << endl;
}

else if (dia>9 && 0<=mes && mes<=9 && year>9)
{
  cout << "UN DIA DESPUES" <<endl ;
cout <<""<<dia<<"/0"<< mes << "/"<<year << endl;
}

else if (dia>9 && mes>9 &&  0<=year&& year<=9)
{
  cout << "UN DIA DESPUES" <<endl ;
cout <<""<<dia<<"/"<< mes<< "/0"<<year << endl;

}
else 
{
  cout << "UN DIA DESPUES" <<endl ;
cout <<""<<dia<<"/"<< mes<< "/"<<year << endl;
}

return 0;  
}








int main()
{
    int dia,mes,year,newyear ;
    bool  febrero ;

    cout << endl << "UN DIA DESPUES"<< endl <<"INGRESE UN FECHA ESPECIFICA Y ESTE PROGRAMA LE DEVOLVERA LA FECHA QUE INGRESO UN DIA DESPUES"  ; 
    cout <<endl<<"EL PROGRAMA MOSTRARA LA FECHA EN FORMATO DD/MM/AA"<< endl << endl ;
    cout << "DIGITE EL DIA (ej.1,15,31): ";
    cin >> dia; 
    cout <<endl <<"MES (ej.2,5,12): "; 
    cin >> mes ; 
    cout <<  endl << "A"<<(char)165<<"O(ej.1999,2003,2013)(NO VALIDOS A";
    cout <<(char)165<<"OS MENORES DE 1000): "; 
    cin >>  year;
    cout<< endl ;
    newyear=year; 

    febrero = bisiesto(year);

    if (validacion(febrero,dia,mes,year)==1)
    {
      formatoyear(&year,newyear);
      agregarundia (febrero ,&dia ,&mes, &year);
      formatodia(dia ,mes,year); 


    }





}



