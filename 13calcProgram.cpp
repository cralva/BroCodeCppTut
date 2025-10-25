#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**************CALCULATOR***************" << std::endl;

    std::cout << "Enter either (+ - / *)";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Your result is " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Your result is " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Your result is " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Your result is " << result << std::endl;
            break;
        default:
            std::cout << "Enter a correct operator" << std::endl;
    }



    std::cout << "***************************************";

}