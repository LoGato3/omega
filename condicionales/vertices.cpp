#include <iostream>
#include <cmath>

int main(){

    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double A = sqrt((pow(x2-x1, 2))+(pow(y2-y1, 2)));
    double B = sqrt((pow(x3-x2, 2))+(pow(y3-y2, 2)));
    double C = sqrt((pow(x4-x3, 2))+(pow(y4-y3, 2)));
    double D = sqrt((pow(x4-x1, 2))+(pow(y4-y1, 2)));

    double lados[4] = {A, B, C, D};
    double menor = lados[0];
    for(int i = 1; i < 4; i++){
        if(lados[i] < menor){
            menor = lados[i];
        }
    }
    std::cout << menor;

    return 0;
}