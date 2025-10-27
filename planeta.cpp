#include <iostream>

int main(){

    int mins, hours, days, seconds;
    std::cin >> seconds;

  
    mins = seconds / 50;
    seconds %= mins;
    hours = mins / 70;
    mins %= 70;
    days = hours / 12;
    hours %= 12; 

    std::cout << days << " " << hours << " " << mins << " " << seconds;
    return 0;
}