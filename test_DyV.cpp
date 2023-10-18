#include<vector>
#include<iostream>
#include "DyV.h"

void main(){
	std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<float> v2{1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9};
	std::vector<char> v3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int x1 = 3;
	float x2 = 1.6;
	char x3 = 9;

	int r1 = BusquedaBinaria(x1, v1, 0, 9);
	int r2 = BusquedaBinaria(x2, v2, 0, 9);
	int r3 = BusquedaBinaria(x3, v3, 0, 9);

	std::cout<<"En el vector 1 se ha buscado el valor "<< x1 <<", que se ha encontrado en la posición "<< r1;
	std::cout<<"En el vector 2 se ha buscado el valor "<< x2 <<", que se ha encontrado en la posición "<< r2;
	std::cout<<"En el vector 1 se ha buscado el valor "<< x3 <<", que se ha encontrado en la posición "<< r3;
}
