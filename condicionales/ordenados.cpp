#include <iostream>
#include <algorithm>

int main(){

    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    int numeros[4] = {A, B, C, D};
    std::sort(numeros, numeros+4);
    for(int i = 0; i<4; i++){
        std::cout << numeros[i] << " ";
    }
   
    return 0;
}