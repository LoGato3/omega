#include <iostream>

int main(){

    int A1, A2, A3, A4;
    std::cin >> A1 >> A2 >> A3 >> A4;
    int years[4] = {A1, A2, A3, A4};
    
    for (int i: years){
        if (i % 400 == 0){
            std::cout << "29 ";
        } else if (i % 4 == 0 && i % 100 != 0){
            std::cout << "29 ";
        } else {
            std::cout << "28 ";
        }
    }


    return 0;
}