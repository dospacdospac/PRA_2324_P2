#include<vector>
#include<stdio.h>
#include <iostream>


int BusquedaBinaria(int X, std::vector<int>& V, int ini, int fin){
	if(ini > fin)
		std::cout<<"No se encuentra en el array";
	int medio = (ini + fin) / 2;

	if(V[medio] == X){
		return medio;
	}
	else if(V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio - 1);
	}
	else{
		return BusquedaBinaria(X, V, ini, medio + 1);
	}
}
