#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    //c = sqrt(pow(a, 2) + pow(b, 2)); can replace the above code with this. it makes it shorter

    std::cout << "side C: " << c;




    return 0;
}