#include <iostream>
 #include <vector>
 #include <cmath>
 #include "funciones.h"
 using namespace std;

 int main(int argc, char* argv[]){
     if ( argc < 2){
         cout << argv[0] << ": falta un numero natural" << endl;
	 cout << "Use " << argv[0] << " --help' para mas informacion" << endl;
     }
     string argv1{argv[1]};
     if (argv1 == "--help"){
         cout << "Este programa realizara n numero de veces el calculo del primo de Mersenne"<< endl;
     
     int numero = stoi(argv1);

     int i = 0, j = 0 , primo;

     while ( i != numero){
         if(Prime(j)){
             i++;
             primo = j;

         }
         j++;
     }
     Mersenne(primo);
     }
     return 0;
 }    

