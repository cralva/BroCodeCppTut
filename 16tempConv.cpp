#include <iostream>

int main() {
    double temp;
    char unit;

    
    std::cout << "********** TEMP CONV ***********" << std::endl;
    std::cout << "F = Farenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to?" << std::endl;
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius" << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Your temperature is: " << temp << " Farenheit" << std::endl;
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in farenheit" << std::endl;
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Your temperature is: " << temp << " Celsius" << std::endl;
    }
    
    else{
        std::cout << "Please enter in only C or F" << std::endl;
    }
    

    std::cout << "********************************" << std::endl;


    return 0;
}
