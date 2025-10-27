#include <iostream>

int main(){

    double A, B, C;
    std::cin >> A >> B >> C;

    if(B==0){
        std::cout << "indefinido";
    } else {
        double x = (A/B) + C;
        double y = (A/B) - C;
        if (x==y){
            std::cout << x;
        } else {
            std::cout << x << " " << y;
        }
    }
    return 0;
}