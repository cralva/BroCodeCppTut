#include <iostream>
/*
        loop(){
            loop(){

            }
        }
    */

int main() {

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: " << std::endl;
    std::cin >> rows;

    std::cout << "How many columbs?: " << std::endl;
    std::cin >> columns;

    std::cout << "What symbol would you like to use?: " << std::endl;
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
        std::cout << symbol;
        }
        std::cout << std::endl;
    }
   
    return 0;
}