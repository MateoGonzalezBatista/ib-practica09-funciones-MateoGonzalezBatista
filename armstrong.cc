#include <iostream>
#include <cmath>
using namespace std;


int main(){
 int numero,cont = 0,cn	= 0,suma = 0,ultima_cifra = 0,cant;
do{
 cout<<"Introduce un numero entero: " << endl;
 cin>>numero;
}while(numero <= 0);{
	// Hacer una copia de numero
cn = numero; 
}
//Saber el numero de cifras
while(numero > 0){
	numero /= 10;
	cont++;
} // Devolverle a numero su valor inicial
numero = cn;
for(int i = 0; i < cont; i++){
  ultima_cifra = numero%10;
  suma = suma + pow(1.0*ultima_cifra, cont);
  numero /= 10;
}
numero = cn;
 if(suma == numero){
 cout<<"Es un numero Armstrong" << endl;
 }
 else{
 cout<<"No es un numero Armstrong" << endl;
 }
 return 0;
}

