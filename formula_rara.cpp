#include <iostream>
#include <cmath>

int main(){
    double x, y, z;

    std::cin >> x >> y >> z;

    double result = (x + (x*(y+(pow(z, 2)))))/((x+M_PI)*(y+M_PI));
    std::cout << result;

    return 0;
}