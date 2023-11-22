#include<vector>
#include <iostream>

template <typename T>
T Partition1(std::vector<T>& V, int ini, int fin);

template <typename T>
T Partition2(std::vector<T>& V, int ini, int fin);

template <typename T>
T Partition3(std::vector<T>& V, int ini, int fin);



template <typename T>
T BusquedaBinaria(int X, std::vector<T>& V, int ini, int fin){
  if(ini > fin){
    std::cout<<"No se encuentra en el array";
    return 0;
  }
      	
    int medio = (ini + fin) / 2;

    if(V[medio] == X){
      return medio;
    }
    else if(V[medio] > X){
      return BusquedaBinaria(X, V, ini, medio - 1);
    }
    else{
      return BusquedaBinaria(X, V, medio + 1, fin);
    }
  }

template <typename T>
int QuickSort1(std::vector<T>& V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition1(V, ini, fin);
		QuickSort1(V, ini, pivot -1);
		QuickSort1(V, pivot + 1, fin);
}
	return 0;
}

template <typename T>
T Partition1(std::vector<T>& V, int ini, int fin){
	T x = V[fin];
	T i = ini;
	for(T j = ini; j <= fin -1; j++){
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

template <typename T>
int QuickSort2(std::vector<T>& V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition2(V, ini, fin);
		QuickSort2(V, ini, pivot -1);
		QuickSort2(V, pivot + 1, fin);
}
	return 0;
}

template <typename T>
T Partition2(std::vector<T>& V, int ini, int fin){
	T x = V[ini];
	T i = ini;
	for(T j = ini; j <= fin -1; j++){
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

template <typename T>
int QuickSort3(std::vector<T>& V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition3(V, ini, fin);
		QuickSort3(V, ini, pivot -1);
		QuickSort3(V, pivot + 1, fin);
}
	return 0;
}

template <typename T>
T Partition3(std::vector<T>& V, int ini, int fin){
  T x = V[(ini+fin)/2];
	T i = ini;
	for(T j = ini; j <= fin -1; j++){
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

	

