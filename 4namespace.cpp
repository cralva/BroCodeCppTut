#include <iostream>
//namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. a namespace allows for identically named entites as long as the namespaces are different

//NO using namespace std; too many possiblilites of mistakes. this will eliminate the need to put std for most commands

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main() {
    using namespace first; //this is we dont have to use the prefix::variable for any of the variables that are in the first namespace
    std::cout << x << std::endl; //no namespace prefix needed

    /*
    int x = 0;
    int x = 1;
    this wont work since these two variables have the same name. this is where namespaces come in handy
    */
   int x = 0;

   std::cout << x << std::endl; //will print 0
   std::cout << first::x << std::endl; //will print one since we can use the namespace to use the namespace 'first'. the format is nameofnamespace::variable

   std::cout << second::x << std::endl; //will print the x value from the second namespace

    return 0;
}