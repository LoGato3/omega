#include <iostream>

int main(){

    int x,y;
    int par = 0;
    int impar = 0;

    std::cin >> x;
    for(int i=0; i<x; i++){
        std::cin >> y;
        if (y%2==0){
            par++;
        } else {
            impar++;
        }
    }
    std::cout << par << " " << impar;

    return 0;
}