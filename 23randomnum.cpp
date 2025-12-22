#include <iostream>
#include <ctime>

int main() {

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL)); //need to initialize this so that we can get generate a random number. not sure why its this but it is

    int num1 = (rand() % 6) + 1; //by default the largest number is huge so we use % 6 to make sure its not over 6// remember that modulus gives us the remainder so this works regardless of the number
    int num2 = (rand() % 6)+ 1; // without the + 1 then this will give us 0-5 but we need to shift it up so give us 1-6 so thats why we add the + 1
    int num3 = (rand() % 6) + 1; //think of this as a dye, right now this is a 6- sided dye but if we had a 20 sided dye then we would do (rand() % 20) + 1
    // % works because it gives us the remainder, for example 1025 % 20 = 5, its 5 bc 20 goes into 1025 51 times to give us 1020 but there is still 5 left over and the 5 is what gets printed

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;


    return 0;
}