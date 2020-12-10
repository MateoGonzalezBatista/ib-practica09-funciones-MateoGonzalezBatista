/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Desarrolle en C++ un programa que imprima en pantalla el valor del factorial de los N primeros números.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see https://en.wikipedia.org/wiki/Factorial
 */

#include  <iostream>
#include  <cassert>
using namespace std;    // afirmar

// Imprime un Prólogo antes de a ejecución completa del programa
void foreword () {
  cout << "Este programa imprime el factorial de los N primeros números para un N introducido por el usuaro" << endl;
}

// Devuelve el factorial del argumento
 unsigned long factorial (unsigned numero ) {
   switch(numero){
           case 0:
           case 1:
      return 1;
    default:
       unsigned long factorial;
       for(int i = 1 ; i <= numero; i++){
        factorial = i*(i-1);
      }
      return factorial;
  }
}

int main () {
  foreword ();
  cout << " Ingrese el número de factoriales a calcular "  << endl; 
  unsigned limite ;
  cin >> limite;
  for( unsigned i = 1 ;i <= limite; i++){
   cout << i << " = " << factorial(i) << endl;
  }
  return  0 ;
}
