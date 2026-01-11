#include <iostream>

//sizeof() = determine the size of bytes in a 
//           variable, data type, class, objects, etc.

int main() {

    std::string name = "Cristian";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(gpa) << " bytes" << std::endl;
    std::cout << sizeof(double) << " bytes" << std::endl; //these two will print out the same

    std::cout << sizeof(name) << " bytes" << std::endl;

    std::cout << sizeof(grade) << " bytes" << std::endl;

    std::cout << sizeof(student) << " bytes" << std::endl;

    std::cout << sizeof(grades) << " bytes" << std::endl;

    std::cout << sizeof(grades)/sizeof(char) << " elements" << std::endl; //this will tell us how many grades are in the array

    std::cout << sizeof(students)/sizeof(std::string) << " elements" << std::endl; //this will tell us how many names are in the array. we need to divide it by the data type


    






    return 0;
}