#include <iostream>

// Local Variables = declared inside a function or block {}

// Global Variable = declared outside of all functions (typically at the top of the program)

int myNum = 3; //global variable goes on top of program outside of teh functions

/*

void printNum();

int main () {
    int myNum = 1;

    printNum();


    return 0;
}

void printNum() {
    std::cout << myNum;
}

    */ 
   //this wont work because myNum variable is local to the main function and printNum() cant use it


//-----------------------------------------------------------
/*
void printNum(int num);

int main () {

    int num = 1;

    printNum(num); //we have to add the argument to the function to make it aware but we also need to alter the function to add the parameter so it knows to look for it


    return 0;
}

void printNum(int num) { //adding the data type and variable as a parameter to allow the function to expect an input
    std::cout << num;
}
*/


//-----------------------------------------------------------

/*
void printNum();

int main() {
    int myNum = 1; //this wont print

    printNum(); //this will take the myNum thats in printNum so 2 will be outputted. variables can have the same name as long as they are in different functions


    return 0;
}

void printNum() {
    int myNum = 2;
    std::cout << myNum;
}
*/


//-----------------------------------------------------------

//making a program using global variables

void printNum();

int main() {

    printNum();

    int myNum = 1; //local variables take precedence so the global variable value of 3 will be ignored

    std::cout << myNum << std::endl; //will also take the global varaible which is 3
    //if we want to use global instead of local then we need to use :: in front of variable for ex, ::myNum



    return 0;
}

void printNum() {
    int myNum = 2; //local variables take precedence so  the global variable of 3 will be ignored
    std::cout << myNum << std::endl; //this will take the global variable which is 3
}
 