#include <iostream>

//foreach loop = loop that eases the traversal over an
//                iterable data set (an array of an example of this)

int main() {

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(int i = 0; i < sizeof(students)/ sizeof(students[0]); i++) {

    }

    //theres another version for a for loop that is easier to write but not as flexible. a for loop can go forward backward, but the foreach only goes forward

    //for each student in student //think of it like this
    for(std::string student : students) {
        std::cout << student << std::endl;
    }
    //it works if we add or delete values in the array as well


    //another examples using char array
    char grades[] = {'A', 'G', 'H', 'B'};

    for(char grade : grades) {
        std::cout << grade << std::endl;
    }



    return 0;
}