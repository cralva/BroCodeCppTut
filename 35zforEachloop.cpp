#include <iostream>

//make two programs showing the difference with a for and foreach loop

int main() {
    int nums[] = {98, 45, 66, 55, 56, 72, 5641, 5};

    for(int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        std::cout << nums[i] << std::endl;
    }

    std::string names[] = {"Cristian", "Syd", "Teddy", "Bella", "Archie"};

    for(std::string name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}