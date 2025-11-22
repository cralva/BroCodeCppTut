#include <iostream>

int main() {
    //break = break out of a loop
    //continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            //break; //will end the for loop when we hit hit. it will be on the 13th iteration and will end it before it can be printed
            continue; //kind of like break except it wont end the program. it will hit the 13th iteration and skip it but will move on to the next one which is 14

        }
        std::cout << i << std::endl;
    }

    return 0;
}