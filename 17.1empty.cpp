#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.empty() this returrns a boolean value. 'true' if its empty, 'false' if its not empty

    if(name.empty()){
        std::cout << "You did not enter a name" << std::endl;
    }
    else{
        std::cout << "Hello " << name << std::endl;
    
    }

    //we can erase a portion of a string by using .erase(begining of thing we want to delete, end of thing we want to delete)
    name.erase(0, 3);
    std::cout << name << std::endl;


    //we can find a certain character by using .find()
    std::cout << name.find(' '); //will return to use the space of our first (i used white space but its whatever you put into the quotes) and it will return its index



    //we can insert a character at a given position by using .insert(index, "item")//first argument is the position and the second argument is what we want to insert
    name.insert(0, "@");
    std::cout << name << std::endl;

    //we can return a character at a given position in a string by using .at(index)
    std::cout << name.at(0) << std::endl; //string index starts a 0, this will print "c"


    //we can use .append() to add things to the end of an existing string
    name.append("@gmail.com");
    std::cout << name << std::endl;

    //other method is .clear() which will delete anything that we inputted

    name.clear();
    std::cout << "Hello " << name << "this is blank since we cleared the name" << std::endl;

    return 0;
}