#include <iostream>

int main() {
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << students[0] << std::endl;
    std::cout << students[1] << std::endl;
    std::cout << students[2] << std::endl;
    //instead of doing this we can use a for loop so we dont have to repeat this code

    for(int i = 0; i < 3; i++) { //we get 3 from how many values are in the array
        std::cout << students[i] << std::endl;
    } //issue with this is that we cant add a value without editing the index

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << std::endl; 
    }//this is the best way to do this


    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        std::cout << grades[i] << std::endl;
    }





    return 0;
}