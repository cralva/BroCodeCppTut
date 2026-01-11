#include <iostream>

//create an array and iterate over it

int main() {

    int nums[] = {43, 6, 93, 1};

    for(int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        std::cout << nums[i] << std::endl;
    }


    return 0;
}