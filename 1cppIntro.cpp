#include <iostream> //#include means that we are including a header file (<iostream>) that contains functions that have basic input and output operations

//using comments

/* this is used to have multiple lines
see how this is working
i like how this works
*/

int main() { //invoking our main function
    std::cout << "I like piiza!" << std::endl; //add std::endl to add a line after your output
    std::cout << "It's really good" << std::endl;

    std::cout << "A new example to show how we're able to add a new line other than using std::endl" << '\n'; //using \n to add new line
    

    return 0; //will run as long as we're returned 0. if we're returned 1 then it means there is issue in function and the function wont run
}