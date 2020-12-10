#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "funciones.h"
using namespace std;
void Usage(int argc, char *argv[]){
	if (argc < 2) {
		cout << argv[0] << ": Falta una palabra y un caracter" << endl;
		cout << "Usa " << argv[0] << " --help para mas informacion" << endl;
		exit(EXIT_SUCCESS);
	}
	string parametro{argv[1]};
	if(parametro == "--help") {
		cout << "Este programa indica en que posicion de la cadena aparece primero un caracter, para ello introduzca una cadena y despues el caracter a analizar. " << endl;
		exit(EXIT_SUCCESS);
	}
	if(argc == 2) {
		cout << argv[0] << ": Falta un caracter" << endl;
                cout << "Usa " << argv[0] << " --help para mas informacion" << endl;
                exit(EXIT_SUCCESS);
	}
}

double pot (double x, int n) {
	double p = 1.0;
	int i;
	for (i = 0; i < n; i++) {
		p = p * x;
	}
	return p;
}


bool Prime(int number){
	bool prime;
     if (number!= 1 && number != 0){

       for (int i = 2; i<= number; i++){
           if (number % i == 0){
               if (number == i){
                   prime = true;

               }
               else {
                   prime = false;
                   return prime;
               }
           }
       }
   } else prime = false;

    return prime;
}


void Mersenne(int primes) {
	int merssene;
	int i;
	for(i = 2; i <= primes; i++){
		if(Prime(i)){
			merssene = pow((2), i) -1;
			cout << merssene << endl;
		}
	}
}







double Random(int posicion_x , int posicion_y) {
    double num;
        num = (posicion_y - posicion_x)*((double) rand() / (double) RAND_MAX) + posicion_y;

        return num;
}

double Media(vector<double> vmedia , int num) {
    vmedia.reserve(num);
    double suma{0.0}, media{0.0};
        for(int i = 0; i < num; i++) {
            suma = suma + vmedia[i];

            }

        media = (suma)/(num);

        return media;
    }

double Maximo(vector<double> vmaximo, int num) {
    vmaximo.reserve(num);
    double maximo{0.0};
         for (int i = 0; i < num; i++) {
                if(vmaximo[i] > maximo) {
                        maximo = vmaximo[i];
                }
        }
    return maximo;
}

double Minimo(vector<double> vminimo, int num) {
    vminimo.reserve(num);
    double minimo{1000000.0};
        for (int i = 0; i < num; i++) {
                 if(vminimo[i] < minimo) {
                       minimo = vminimo[i];
              }
        }
    return minimo;
}

double Suma(vector<double> vsuma, int num) {
    vsuma.reserve(num);
    double sumatorio{0.0};
    for(int i = 0; i < num; i++) {
            sumatorio = sumatorio + vsuma[i];
            }
    return sumatorio;
}

double Producto(vector<double> vproducto, int num) {
    vproducto.reserve(num);
    double producto;
    for(int i = 0; i < num; i++) {
            producto = producto * vproducto[i];
            }
    return producto;
}

