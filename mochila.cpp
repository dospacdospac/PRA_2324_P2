#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> mochila(std::vector<int> &p, std::vector<int> &b, int M) {
    int Ps = p.size();
    int N1 = Ps + 1;
    int M1 = M + 1;
    int Mat[N1][M1];

    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < M1; j++) {
            Mat[i][j] = -1;
        }
    }

    for (int i = 0; i < N1; i++) {
        Mat[i][0] = 0;
    }
    for (int i = 0; i < M1; i++) {
        Mat[0][i] = 0;
    }

    for (int i = 1; i < N1; i++) {
        for (int C = 1; C < M1; C++) {
            int ci = p[i - 1];
            int g;
            if (ci > C) {
                g = Mat[i - 1][C];
            } else {
                g = std::max(Mat[i - 1][C], Mat[i - 1][C - ci] + b[i - 1]);
            }
            Mat[i][C] = g;
        }
    }

    std::cout << "Beneficio máximo = " << Mat[N1 - 1][M1 - 1] << std::endl;

    std::vector<int> Sol(N1 - 1, 0);
    int i = N1 - 1;
    int j = M;
    while (i != 0 && j != 0) {
        if (i == 0 || Mat[i][j] != Mat[i - 1][j]) {
            Sol[i - 1] = 1;
            j = j - p[i - 1];
        }
        i--;
    }
    return Sol;
}

int main() {
    std::vector<int> p{9, 6, 5};
    std::vector<int> b{38, 40, 24};
    int max = 15;
    std::vector<int> sol = mochila(p, b, max);
    for (int i = 0; i < p.size(); i++) {
        std::cout << "Peso objeto: " << p[i] << " || Valor objeto: " << b[i] << " || Numero de objetos: " << sol[i] << "\n";
    }
}
