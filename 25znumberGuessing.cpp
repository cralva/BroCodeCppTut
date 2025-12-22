#include <iostream>
#include <ctime>

int main() {
    int guess;
    int num;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********** NUMBER GUESSING GAME **********" << std::endl;

    do{
        std::cout << "ENTER A NUMBER BETWEEN 1-100" << std::endl;
        std::cin >> guess;
        tries++;

        if(guess < num) {
            std::cout << "Your guess is too low" << std::endl;
        }
        else if(guess > num) {
            std::cout << "Your guess is too high" << std::endl;
        }
        else{
            std::cout << "You guess correctly! It took you " << tries << " tries to get it right!" << std::endl;
        }

    }while(guess != num);

    std::cout << "********** NUMBER GUESSING GAME **********" << std::endl;


    return 0;
}