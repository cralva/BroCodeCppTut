#include <iostream>

double getTotal(double prices[], int size);

int main() {
    double prices[] = {49.99, 15.05, 745, 9, 9.99};
    int size = sizeof(prices)/sizeof(double); //we have to create this to get the size and add it as an argument when calling the getTotal()
    double total = getTotal(prices, size); //when we pass an array to a function we only need the name and not the square brackets
    

    std::cout << "$" << total;


    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;

    /* this doesnt work bc the function has no idea how big the prices array is so it cant do sizeof()
    for(int i = 0; i < sizeof(prices)/sizeof(double); i++) {
        total = total + prices[i];
    }
        */

        for(int i = 0; i < size; i++) {
            total += prices[i]; //this will work now since we made the size variable and now our program is aware of the size of the array
        }

    

    return total;

}