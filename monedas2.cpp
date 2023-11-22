

#include <iostream>
#include <vector>
#include <algorithm>




int cambio(std::vector<int>& v, int size, int M, std::vector<int>& res){
	const int None = -1;
	int T [size][M + 1];
	
	for (int i = 0; i < size; i++) {
	       	for (int j = 0; j <= M+1; j++) {
			T[i][j] = None;
	       	}
	}
	
	for (int j = 1; j <= M+1; j++) {
        	if (j >= v[0] && T[0][j - v[0]] != 0) {
            		T[0][j] = 1 + T[0][j - v[0]];
       		 }
   	 }

	for (int i = 1; i <= size;  i++){
		T[i][0] = 0;
		for(int j = 1; j <= M+1; j++) {
			if (j < v[i] || T[i][j - v[i]] == None)
				T[i][j] = T[i -1][j];
			else if (T[i - 1][j] != None)
				T[i][j] = std::min(T[i -1][j], 1 + T[i][j - v[i]]);
			else
				T[i][j] = 1 + T[i][j - v[i]];
		}

	}

	return T[size][M];

}


int main(){
	
	std::vector<int> v = {1, 4, 6};
	std::vector<int> res(v.size());
	int M = 8;
	int result;

	result = cambio(v, v.size(), M, v);
	
	std::cout<< result << std::endl;

	return 0;

}

