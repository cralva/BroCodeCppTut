#include <iostream>

//ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

int main(){

    int grade = 75;

    // if(grade >= 60){
    //     std::cout << "You pass!";
    // }
    // else{
    //     std::cout << "You fail";
    // }
    //instead of using the ifelse above we can use a ternary operator


    //even or odd ternary
    (grade >= 60) ? std::cout << "You pass!"<< std::endl : std::cout << "You fail" << std::endl;

    int number = 51;

    (number % 2 == 0) ? std::cout << "Even number!" << std::endl : std::cout << "odd number!" << std::endl;


    //bool example
    bool hungry = true;

    (hungry == true) ? std::cout << "You are hungry" << std::endl : std::cout << "You are full" << std::endl; //with booleans we dont need to have the == true we could just have it as "hungry" and it will work since it will check if its true
 

    return 0;
}