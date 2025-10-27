#include <iostream>
#include <cmath>

int main(){
    double a1, b1, c1, a2, b2, c2;

    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    double D = (a1*b2) - (a2*b1);
    double x = ((c1*b2)-(c2*b1)/D);
    double y = ((a1*c2)-(a2*c1)/D);
    
    std::cout << x << y;

    return 0;
}