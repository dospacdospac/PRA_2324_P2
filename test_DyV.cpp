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

	auto start1 = std::chrono::system_clock::now();
	int r1 = BusquedaBinaria(x1, v1, 0, 9);
	auto end1 = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration1 = end1 - start1;
	
	auto start2 = std::chrono::system_clock::now();
	int r2 = BusquedaBinaria(x2, v2, 0, 9);
	auto end2 = std::chrono::system_clock::now();
        std::chrono::duration<float, std::milli> duration2 = end2 - start2;

	auto start3 = std::chrono::system_clock::now();
	int r3 = BusquedaBinaria(x3, v3, 0, 9);
	auto end3 = std::chrono::system_clock::now();
        std::chrono::duration<float, std::milli> duration3 = end3 - start3;


	std::cout<<"En el vector 1 se ha buscado el valor "<< x1 <<", que se ha encontrado en la posición "<< r1<<" Y ha tardado "<< duration1.count()<< std::endl;
	std::cout<<"En el vector 2 se ha buscado el valor "<< x2 <<", que se ha encontrado en la posición "<< r2<<" Y ha tardado "<< duration2.count()<< std::endl;
	std::cout<<"En el vector 1 se ha buscado el valor "<< int(x3)  <<", que se ha encontrado en la posición "<< r3<<" Y ha tardado "<< duration3.count()<< std::endl;


	std::vector<int> ord{7, 8, 10, 5, 6, 2, 1, 9, 4, 3};

	auto start4 = std::chrono::system_clock::now();
	int r4 = QuickSort1(ord, 0, 9);
	auto end4 = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration4 = end4 - start4;
	
	auto start5 = std::chrono::system_clock::now();
	int r5 = QuickSort2(ord, 0, 9);
	auto end5 = std::chrono::system_clock::now();
        std::chrono::duration<float, std::milli> duration5 = end5 - start5;

	auto start6 = std::chrono::system_clock::now();
	int r6 = QuickSort3(ord, 0, 9);
	auto end6 = std::chrono::system_clock::now();
        std::chrono::duration<float, std::milli> duration6 = end6 - start6;


	std::cout<<"El metodo QuickSort1 ha tardado: "<< duration4.count()<< std::endl;
	std::cout<<"El metodo QuickSort2 ha tardado: "<< duration5.count()<< std::endl;
	std::cout<<"El metodo QuickSort1 ha tardado: "<< duration6.count()<< std::endl;




	
	return 0;
}

