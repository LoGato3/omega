#include <iostream>
#include <string>

int main(){

    int N;
    std::string palabra; 
    
    std::cin >> N;
    for(int i = 0; i<N; i++){
        std::cin >> palabra;
        std::string nueva_palabra;
        for (int i = 0; i<palabra.length(); i++){
            char lastChar = palabra[palabra.length() - (i+1)];
            nueva_palabra += lastChar;
        }
        if (nueva_palabra == palabra){
            std::cout << "P ";
        } else {
            std::cout << "NP ";
        }
    }


   

    return 0;
}