#include <iostream>
#include <ctime>

int main() {
    srand(time(0)); //using 0 and NULL is the same thing
    int randNum = (rand() % 5) + 1; //without the + 1 then our possible values are 0-5, by adding the + 1 then it changes to 1-6

    switch(randNum){
        case 1: std::cout << "You win a bumper sticker" << std::endl;
                break; //if you dont add the break then you will fall through the switch and it will keep outputting things
        case 2: std::cout << "You win a t shirt" << std::endl;
                break;
        case 3: std::cout << "You win a free lunch" << std::endl;
                break;
        case 4: std::cout << "You win a gift card" << std::endl;
                break;
        case 5: std::cout << "You win a concert tickets" << std::endl;
                break;
    }



    return 0;
}