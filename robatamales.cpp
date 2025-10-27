#include <iostream>

int main(){

    int T, B;

    std::cin >> T >> B;

    B--; // quitando al lider

    int t_lider = T/2+(T%2); // tamales que se come el lider
    
    int sobrante = (T-t_lider)%B; // tamales que sobran
    int t_banda = (T-t_lider)/B;
    int y = t_lider + ((T-t_lider)%B);
    

    std::cout << t_banda;

    return 0;
}