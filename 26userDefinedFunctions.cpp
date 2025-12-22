#include <iostream>

//function = a block of reuseable code

//user defined functions go before our main function
//but if we wish to create out functions after our main function, we can but we need to atleast declare it before the main function a simple "void happyBirthday();" will work and if we have any parameters we need to add that in there aswell

void happyBirthday(std::string name, int age) { //the name is called a parameter and needs datatype //it also doesnt matter what variable name we use, we can have it say boy and keep name in the argument in the main function and it will still work. its based on position
    std::cout << "Happy Birthday to you " << name << std::endl;
    std::cout << "Happy Birthday to you!" << name << std::endl;
    std::cout << "Happy Birthday dear you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you! You are " << age << " years old" << std::endl << std::endl;

}


int main() {

    std::string name = "Cristian"; //this only works if we make the happy birthday function aware that the string name exists and we do that by adding it in the arugument when its called in the main function
    int age = 21;
    
    happyBirthday(name, age); //calling our function
    happyBirthday(name, age); //the name and age in this is called an argument and does not need datatype
    happyBirthday(name, age);

    return 0;
}