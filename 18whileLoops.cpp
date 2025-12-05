#include <iostream>

int main() {
    std::string name;

    // if(name.empty()) {
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);
    // } turning this into a while loop since we need it to keep asking if the the name cin is empty

    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    } //the condition gets check every time after the block and if its true then it gets repeated but if its false then the block gets skipped

    std::cout << "Hello " << name << std::endl;

    // while(1==1) {
    //     std::cout << "Help. we are stuck in an infinite loop!";
    // } //this is an infinite loop since there is no question condition to ask. bad

    std::cout << "Hello " << name;
    return 0;
}