#include <iostream>

void bakePizza();

void bakePizza(std::string topping1);
//so functions can have the same names the only thing is that they need to have different parameters (a function + their parameter is known as a function signature)

void bakePizza(std::string topping1, std::string topping2);

int main() {

    bakePizza();

    bakePizza("pepporini"); //using our second function with the topping 1 parameter

    bakePizza("jalenpenos", "pineapple");

    

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza" << std::endl;
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza!" << std::endl;

}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza";

}