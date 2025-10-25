#include <iostream>

// cout >> (insertion operator)
// cin >> (extracting operator)


int main() {

    std::string name;
    std::string fullName;
    int age; 

    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "What is your full name? ";
    ///std::cin >> fullName; //this will only read the first name. this only reads until the first space and then it ends.
    //std::getline(std::cin, fullName); //this allows us to get the entire string including spaces/ inside parenthesis is data type and then its the variable name but this wont work rn since we have a cin >> on top.
    std::getline(std::cin >> std::ws, fullName); //need to do to add std::ws if we have a cin >> on top 

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old.";
    std::cout << "Your full name is " << fullName << std::endl;



    return 0;
}