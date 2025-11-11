#include <iostream>

//do while loop = do some block of code first, 
//               then repeat again if condition is true

int main() {
    int number;

    // std::cout << "Enter a positive number: ";
    // std::cin >> number;

    // while(number < 0){
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> number;
    // } //we had to add line 9 and 10 for this to work. since we dont have value for number yet then we need to ask first. if we dont then it will get skipped 

    //easier way of doing it by using do white

    do{ //execute this line of code
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number<0); //then do it again if this condition is true

    std::cout << "The number is " << number;


    return 0;
}