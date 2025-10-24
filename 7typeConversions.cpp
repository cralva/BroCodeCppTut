#include <iostream>

int main() {
    //type conversion = converts a value of one data type to another
    //                  Implicit = automatic
    //                  Explicit = Precede value with new data type (int)

    // -----implicit--------
    //int x = 3.14; //this will only print 3 since its an int and not a double
    double x = 3.14; //this prints out 3.14 since data type is a double
        std::cout << x << std::endl;
    // -------implicit----


    // ------explicit--------
    double y = (int) 3.14;
    std::cout << y << std::endl;
    // -------explicit-------


    char z = 100; //will output the ascii character for 11/ implied
    std::cout << z << std::endl;

    std::cout << (char) 100 << std::endl; //explicit

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; //we need to typecast as least one of the inside equation properties. if we leave them ints then its not going to once. one needs to be a double

    std::cout << score << "%" << std::endl;

    

    return 0;
}