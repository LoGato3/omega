#include <iostream>
#include <utility>

int main(){

    int A,B,C;
    std::cin >> A >> B >> C;

    int lista[3] = {A, B, C};
    int x = 0;

    for (int i = 1; i<=3; i++){
        if(lista[i]<lista[i+1]){
            continue;
        } else {
            std::swap(lista[i],lista[i+1]);
            x++;
        }
    }
    std::cout << x;

    return 0;
}