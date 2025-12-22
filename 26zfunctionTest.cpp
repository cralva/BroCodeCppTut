#include <iostream>

void treFlip(std::string name, int age, int tries) {

    std::cout << name << " is " << age << " and he is trying to tre flip el toro" << std::endl;
    std::cout << "So far it has taken him " << tries << " tries to get this down" << std::endl;
    std::cout << "He is going to try it again today" << std::endl;



}

int main() {

    std::string name = "Chris";
    int age = 35;
    int tries = 4;


    treFlip(name, age, tries);
    treFlip("Chris", 35, 4);
    //both of these work, i wanted to show you both that way you can see it. i recommend using variables just in case it comes from inputs. good habit to use variables


    return 0;
}