#include <iostream>

int main(){

    int M,N;

    std::cin >> M >> N;

    for(int i = M; i<N; i++){
        std::cout << i << " ";
    }
    std::cout << N;

    return 0;
}