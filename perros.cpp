#include <iostream>
#include <cmath>

int main(){

    int cachorros, perros_pancho, hijos;
    std::cin >> cachorros >> perros_pancho >> hijos;

    hijos+=1;

    std::cout << ((cachorros-perros_pancho) % hijos) + perros_pancho;

    return 0;
}