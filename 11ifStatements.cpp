#include <iostream>

//if statements = do something if a condition is true. if its not true, then dont do it

//format is if(operator) {
//}

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are too old for this site";
    }

    else if(age >= 18){ //this is the format for an if statement
        std::cout << "Welcome to the site"; //this only gets executed if the if statement is true //this was our original if but had to change it to an else if since we need to have an age >= 100
    }
    else if(age < 0){
        std::cout << "You havent been born yet"; //the else if gets checked after the if statement. if the else if statement is true then the body is executed if not then we execute the else

    }
    // else if (age >= 100){
    //     std::cout << "You are too old to enter this site";

    // } //order matters, because the if(age >= 18) is first and is true then that gets executed and everything gets ignored. we need to place this as our if since the program works better if someone is >= 100
    
    else{
        std::cout << "You are not old enough to enter!"; //the else is whats executed if the if statement is false
    }

    return 0;
}