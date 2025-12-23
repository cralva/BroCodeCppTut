#include <iostream>
// return = return a value back to the spot where you called the encompassing function

double square(double length); //void used to be where double is but we need to change it since our square function returns a variable with a double variable// that first word depends on the data type that we return

double cubed(double length);





/////////////////PT2//////////
std::string concatStrings(std::string string1, std::string string2);

int main() {
    double Proglength = 6.0;
    double area = square(Proglength); //the words inside of the function are called arguments, and these can be different than the parameters but they need to be in the same position
    double cubedArea = cubed(Proglength);

    std::cout << "Area: " << area << "cm^2" << std::endl;
    std::cout << "Volume: " << cubedArea << "cm^3" << std::endl;




    ////////pt2//////////
    ////doing another example but using strings. going to create a function to concatenate two strings together
    std::string firstName = "Cristian";
    std::string lastName = "Alvarez";

    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << ". Its a pleasure as always" << std::endl;





    return 0;
}

double square(double length) {
    double result = length * length;
    return result;
}

double cubed(double length) {
    return length * length * length; //we dont need to be make a variable we can return the algorithm this way but I prefer to make a variable and return the variable
}



////pt2////////////
/////////////////newe xample//// 

std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}
 