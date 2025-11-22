#include <iostream>

int main() {
    // for(int i = 1; i <= 5; i++){ //this is the format for a for loop
    //     std::cout << "Happy New Year!" << std::endl;

    // }

    for(int i = 0; i <= 10; i+=2){ //i++ will increment by 1, but we can also change that to anything we want// for ex i+=2 will count by 2 and so on
        std::cout << i << std::endl;
    }
    std::cout << "Happy New Year! While counting up to 10" << std::endl;

    for(int i = 10; i >=0; i--){ //i-- is counting down, also works with i-=2 and so on
        std::cout << i << std::endl;
    }
    std::cout << "Happy New Year! While counting down from 10" << std::endl;

}