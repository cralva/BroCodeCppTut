#include <iostream>

//create a program that has two arrays
//the first array needs to have the values in it when its delcared
//the second needs to be empty and then added later

int main() {

    std::string kids[] = {"Teddy", "Baby A", "Bella", "Archie"};
    std::cout << kids[0] << std::endl;

    int ages[3];

    ages[0] = 3;
    ages[1] = 1;
    ages[2] = 0;

    std::cout << ages[2] << std::endl;

    return 0;
}