#include <iostream>

int main() 
{
    std::string name;

    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name); //this is better than regular cin because it can take multiple words and whitepsacee. cin will only take up until the first whitespace

    //name.length() //will give us the length of a string

    if(name.length() > 12){
        std::cout << "Your name cant be over 12 letters long" << std::endl;
    }
    else{
        std::cout << "Welcome " << name << std::endl;
    }


    return 0;
}