#include <iostream>

//make one program with using local and global variables

//program will print out your name and say a nice greeting

std::string name = "Cris"; //global variable

void sayName(std::string name);

int main() {

    std::string sonsName = "Teddy"; //local variable will take priorority

    sayName(sonsName);


    return 0;
}

void sayName(std::string name) {
    std::cout << "You are such a little fucking bitch " << name << std::endl;
}
