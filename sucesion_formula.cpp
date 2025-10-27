#include <iostream>
#include <cmath>

int main(){

    float x;
    std::cin >> x;
    float y = (x+5)/((x+1)*2);
    float z = ((pow(y,2))+(x*(x-(y*2))))/(x*y);

    std::cout << z;

    return 0;
}