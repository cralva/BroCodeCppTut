#include <iostream>

int main() {
    double temp = 0;
    char unit = ' ';

    std::cout << "******* Temperature conversion program ************" << std::endl;
    std::cout << "C for celsius" << std::endl;
    std::cout << "F for farenheit" << std::endl;
    std::cout << "Enter what you would like to convert" << std::endl;
    std::cin >> unit;
    
    if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature" << std::endl;
        std::cin >> temp;

        temp = ((temp - 32) / 1.8);
        std::cout << "Your temperature in Celsius is: "  << temp << std::endl;
    }
    else if(unit == 'F' || unit == 'f'){
        std::cout << "Enter temperature" << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Your temperature in Farenheit is: "  << temp << std::endl;

    }
    else{
        std::cout << "Please enter a proper unit. C or F" << std::endl;
    }


    std::cout << "****************************************************" << std::endl;

    return 0;
}