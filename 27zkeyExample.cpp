#include <iostream>

//going to create a program that returns the total amount including tax

double taxAmount(int amount, double taxFee);

int main() {

    int amount = 0;
    double taxFee = 0.0;
    double totalCost = 0.0;

    std::cout << "Please enter the cost of the item: " << std::endl;
    std::cin >> amount;

    std::cout << "Please enter the tax fee (if it 7 percent enter 1.07): " << std::endl;
    std::cin >> taxFee;

    totalCost = taxAmount(amount, taxFee);
    std::cout << "Your total came out to: $" << totalCost << std::endl;




    return 0;
}

double taxAmount(int amount, double taxAmount) {
    double totalTax = amount * taxAmount;
    return totalTax;
}