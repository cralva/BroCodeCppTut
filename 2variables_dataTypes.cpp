#include <iostream>

int main() {

    //data types
    //1. integers (whole number)
    int age = 21;
    int year = 2025;
    int days = 7;
    int decimal_test = 10.5; //only 10 will print out since this data type is an int and the .5 will be ignored
    std::cout << decimal_test << std::endl;

    //2. double (number with a decimal)
    double price = 10.99;
    double gpa = 2.1;
    double temp = 25.1;

    //3. char (single character)
    char grade = 'A'; //need to use single quotes for char data type
    char initial = 'BC'; //similar to using int for a double except the first letter will get dropped and the second letter will be printed
    char currency = '$'; //works with symbols too
       
    std::cout << initial << std::endl;


    //4. boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //5. String (objects that represents a sequence of text)
    std::string name = "Cristian";
    std::string day = "Tuesday";
    std::string food = "Pizza";
    std::string address = "9505 wolf river";

    std::cout << name << std::endl;
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << address << std::endl;


    int x ; //declaration
    x = 5; //assignment
    std::cout << x << std::endl;
    //we could also combine this. look below

    int y = 15;
    std::cout << y << std::endl;

    int sum = x + y;
    std::cout << sum;

    return 0;
}