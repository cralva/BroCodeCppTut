#include <iostream>
#include <ctime>

int main() {

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; //by default thte largest number is huge so we use % 6 to make sure its not over 6
    int num2 = (rand() % 6)+ 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;


    return 0;
}