#include <iostream>

//array = a data structure that can hold multiple values
//        values are accessed by an index number
//        "kind of like a variable that holds multiple values"

int main() {

    /* this is a normal variable
    std::string car = "Corvette";

    std::cout << car;
    */


    //now we turn our earlier variable into an array, this is the format
    // arrayName[] = {values, comma};
    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::cout << cars << std::endl; //this will ouput a random set of integers & we need to include the index number by using []

    std::cout << cars[0] << std::endl; //will access corvetts
    std::cout << cars[1] << std::endl; //will access mustang
    std::cout << cars[2] << std::endl; //will access camry


    //we can reassign values as well
    cars[0] = "Lambo"; //will change corvette into lambo
    std::cout << cars[0] << std::endl;

    //all values have to be the same data type, we cant have strings with ints or have htem mixed. they need to be the same


    //declare an array and then add values later
    //std::string bikes[]; this wont work since we need to add the size in the parameter
    std::string bikes[4]; //this fixes the above error. we need to include the size
    bikes[0] = "Ducati";
    bikes[1] = "S1k";
    bikes[2] = "R1";
    bikes[3] = "Busa";



    //new ex

    double price[] = {10.99, 5, 7.50, 15};
    std::cout << price[0] << std::endl;
    std::cout << price[1] << std::endl;
    std::cout << price[2] << std::endl;
    std::cout << price[3] << std::endl;







    return 0;
}