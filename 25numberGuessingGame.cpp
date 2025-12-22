#include <iostream>
#include <ctime>

int main() {

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********** NUMBER GUESSING GAME **********" << std::endl;

    do{
        std::cout << "Enter a number between (1-100)" << std::endl;
        std::cin >> guess;
        tries++; //will increment by 1

        if(guess > num) {
            std::cout << "Your guess is too high" << std::endl;
        }
        else if(guess < num) {
            std::cout << "Too low" << std::endl;
        }
        else{
            std::cout << "Correct! It took you " << tries << " tries to get it correct!" << std::endl;
        }
    }while(guess != num);


    std::cout << "********** NUMBER GUESSING GAME **********" << std::endl;




    return 0;
}