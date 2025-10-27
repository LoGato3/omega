#include <iostream>

int main(){

    int x;
    int y = 0;

    while(x!=0){
        std::cin >> x;
        y += x;
    }
    std::cout << y;

    return 0;
}