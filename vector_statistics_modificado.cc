#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

int main( int argc, char* argv[]) {
        int numeros, posicion_x, posicion_y;

        numeros = stoi(argv[1]);
        posicion_x = stoi(argv[2]);
        posicion_y = stoi(argv[3]);

        vector<double> random(numeros);
        srand(time(NULL));

        for (int i = 0; i < numeros; i++) {
                random[i] = Random(posicion_x , posicion_y);
                cout << random[i] << endl;


        }

    cout << "Media: " << Media(random, numeros) << endl
             << "Máximo: " << Maximo(random, numeros) << endl
             << "Mínimo: " << Minimo(random, numeros) << endl
                 << "Suma: " << Suma(random, numeros) << endl
                 << "Producto: " << Producto(random, numeros) << endl;
         if(argv[1] || argv[2] || argv[3] < Media(random,numeros)){
		 cout << "Hay " << \n argv[1,2,3] << " elementos menores que la media" << endl;
        return 0;
}

