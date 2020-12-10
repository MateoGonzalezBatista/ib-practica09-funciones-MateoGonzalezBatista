#include <iostream>
#include <string>
#include <cstdlib>
#include "funciones.h"
using namespace std;
int main() {
	string cadena,caracter;
	cout << "Indica la cadena" << endl;
	cin >> cadena;
	cout << "Indica el caracter" << endl;
	cin >> caracter;
	int posicion = cadena.find_first_of(caracter);
	cout << posicion << endl;
        return 0;
}

