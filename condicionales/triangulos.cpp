#include <iostream>

int main(){
    int x,y,z;
    std::cin >> x >> y >> z;

    if (x==y && y==z){
        std::cout << "equilatero";
    } else if (x!=y && y!=z){
        std::cout << "escaleno";
    } else {
        std::cout << "isosceles";
    }


    return 0;
}