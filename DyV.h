#include<vector>
#include <iostream>


template <typename T>
T BusquedaBinaria(int X, std::vector<T>& V, int ini, int fin){
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

template <typename T>
T QuickSort(std::vector<T>& V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(V, ini, fin);
		QuickSort(V, ini, pivot -1);
		QuickSort(V, pivot + 1, fin);
}
}

template <typename T>
T Partition(std::vector<T>& V, int ini, int fin){
	T x = V[fin];
	T i = ini;
	for(T j = ini; j == fin -1; j++){
		if(V[j] <= x){
			int aux;
			aux = V[i];
			V[i] = V[j];
			V[j] = aux;
			i++;
		}
	}
	T aux2;
	aux2 = V[i];
        V[i] = V[fin];
        V[fin] = aux2;
	return i;
}
