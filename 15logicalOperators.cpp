#include <iostream>

// && = checks if two conditions are true
// || = check if at least one of two conditions are true
// ! = reverses the logical state of its operand

int main() {
    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){ //both of these must be true for the if statement to execute
        std::cout << "The temperature is good";
    }
    else{
        std::cout << "The temperature is bad";
    }

    if(temp <= 0 || temp >= 30){ //only one has to be true
        std::cout << "temp is bad";
    }
    else{
        std::cout << "Temp is good";
    }

    if(sunny){
        std::cout << "It is sunny outsite";
    }
    else{
        std::cout << "It is cloudy outside!";
    }

    if(!sunny){
        std::cout << "It's cloudy"; //the ! doesnt affect the statements, the first line will still need to be true to execute. in this case, because !sunny is false the else statement will execute
    }
    else{
        std::cout << "Its sunny";
    }


    


}