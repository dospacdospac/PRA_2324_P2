#include<vector>
#include<iostream>
#include "DyV.h"
#include<chrono>

int main(){
	std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<float> v2{1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9};
	std::vector<char> v3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int x1 = 3;
	float x2 = 1.6;
	char x3 = 9;

	auto start = std::chrono::system_clock::now();
	int r1 = BusquedaBinaria(x1, v1, 0, 9);
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration1 = end - start;
	
	auto start = std::chrono::system_clock::now();
	int r2 = BusquedaBinaria(x2, v2, 0, 9);
	auto end = std::chrono::system_clock::now();
        std::chrono::duration<float, std::milli> duration2 = end - start;

	auto start = std::chrono::system_clock::now();
	int r3 = BusquedaBinaria(x3, v3, 0, 9);
	auto end = std::chrono::system_clock::now();
        std::chrono::duration<float, std::milli> duration3 = end - start;


	std::cout<<"En el vector 1 se ha buscado el valor "<< x1 <<", que se ha encontrado en la posición "<< r1<<"Y ha tardado "<< duration1;
	std::cout<<"En el vector 2 se ha buscado el valor "<< x2 <<", que se ha encontrado en la posición "<< r2<<"Y ha tardado "<< duration2;
	std::cout<<"En el vector 1 se ha buscado el valor "<< x3 <<", que se ha encontrado en la posición "<< r3<<"Y ha tardado "<< duration3;

	return 0;
}

