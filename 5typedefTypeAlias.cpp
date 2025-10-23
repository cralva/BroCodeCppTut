#include <iostream>

//typedef = reserved keyword used to create an additional name (alais) for another data type
// new identifier for an existing type
// helps with readability and reduces typos
// Use when there is a clear benefit
// replaced with 'using' (word better w/ templates)

#include <vector> //header file to include vectors for th examples

typedef std::vector<std::pair<std::string, int>> pairlist_t; //typedef is what creates the typedef and the the last is what we are going to call it. we can use pairlist_t anywhere in the program to get the long object

typedef std::string text_t; //string
typedef int numbers_t; //integer

using text_t = std::string; //new way of doing this
using number_t = int;

int main() {

    std::vector<std::pair<std::string, int>> pairlist; //before using typedef

    pairlist_t pairlist; //much easier doing this

    text_t firstName = "Cristian"; //using typedef

    numbers_t money = 12000; //using int typedef

    return 0;
}