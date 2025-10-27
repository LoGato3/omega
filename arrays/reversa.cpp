#include <iostream>

int main(){
    int N, X;
    std::cin >> N;
    int orden[N];

    for(int i = 0; i<N; i++){
        std::cin >> X;
        orden[i] = X;
    }

    int leng = sizeof(orden) / sizeof(orden[0]);
    for (int i = 0; i<N; i++){
        std::cout << orden[leng-(i+1)] << " ";
    }

    return 0;
}