#include <iostream>

//arithmetic operators = return the result of specific arirthmetic operation (+ - * /)

int main() {

    int students = 20;

    //students = students + 1;
    //students += 1;

    //students = students + 2;
    //students+=2;
    //students++; this will add one

    //students = students - 1;
    //students -= 1;

    //students = students - 2;
    //students -= 2;
    //students--;

    //students = students * 2;
    //students*=2;

    //students = students / 2;
    //students/=2;


    int remainder = students % 2; //modulus operator will print the remainder so this will print 0 because 2 goes into 20 ten times so there is not remainder. using modular 2 is the best way to check if a number if even or not. if its even then remainder in 0 if its 1 then its odd

    int remainder2 = students % 3; // this will return 2 since three goes into 20 six times and 6 * 3 = 18 and that leaves 2 left over so the two is whats outputted


    std::cout << students << std::endl;
    std::cout << remainder << std::endl;
    std::cout << remainder2 << std::endl;

    //pemdas exists
    //1. (first)parenthesis
    //2. multiplication and division (we do left to right if we have in the same equation)
    //3. addition and subtraction (we do left to right if we have in the same equation)

    int pemdasTest = 6 - 5 + 4 * 3 / 2;


    return 0;
}