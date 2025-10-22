#include <iostream>

int main() {

    //the const keyword specified that a variables value is constant
    //tells the compiler to prevent anything from moodifying it
    // (read-only)

    double pi = 3.14159;
    pi = 420.69; //this will change the value of pi but if we dont want it to be changed then we can use const keyword and it cant be mutable
    const int RADIUS = 10; //still need data type like int after delcaring it a constant and variable needs to be capitalized
    //RADIUS = 30; will not work since this is a cont

    const int LIGHT_SPEED = 200792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;


    double circumference = 2 * pi * RADIUS;

    std::cout << circumference << " cm"  << std::endl;
    return 0;
}