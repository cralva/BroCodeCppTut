#include <iostream>

//make a program that adds up the total of prices

double getTotal(double prices[], int size);

int main() {
    double prices[] = {98.32, 78.63, 87, 52, 53.20};
    int size = sizeof(prices)/sizeof(double);

    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;

    for(int i = 0; i < size; i++) {
        total += prices[i];

    }
    
    return total;

}