#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); //will print the bigger number
    z = std::min(x, y);//will print the smaller number
    z = pow(2, 3);//same as 2^3
    z = pow(2, 4);//same as 2^4
    z = sqrt(9); //will print 3. "Whats the square root of 9"
    z = abs(-3);//3
    z = round(x);//will round up or down
    z = ceil(x);//will round up
    z = floor(x);//will round down



    return 0;
}