#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int randNum = (rand() % 15) + 1;
    std::string restaurant;

    std::cout << "*********************SYDS RESTAURANT PICKER HELPER*****************************" << std::endl;
    
    switch(randNum) {
        case 1: std::cout << "Arbys" << std::endl;;
            restaurant = "Arbys";
            break;
        case 2: std::cout << "Mcdonalds" << std::endl;
            restaurant = "Mcdonalds";
            break;
        case 3: std::cout << "Buffalo Wings and Ribs" << std::endl;
            restaurant = "Buffalo Wings and Ribs";
            break;
        case 4: std::cout << "Wings Etc" << std::endl;
            restaurant = "Wings Etc";
            break;
        case 5: std::cout << "Casas" << std::endl;
            restaurant = "Casas";
            break;
        case 6: std::cout << "Zianos" << std::endl;
            restaurant = "Zianos";
            break;
        case 7: std::cout << "Olive Garden" << std::endl;
            restaurant = "Olive Garden";
            break;
        case 8: std::cout << "Outback Steakhouse" << std::endl;
            restaurant = "Outback Steakhouse";
            break;
        case 9: std::cout << "Logans" << std::endl;
            restaurant = "Logans";
            break;
        case 10: std::cout << "Pizza King" << std::endl;
            restaurant = "Pizza King";
            break;
        case 11: std::cout << "Beer Barrel" << std::endl;
            restaurant = "Beer Barrel";
            break;
        case 12: std::cout << "Bdubs" << std::endl;
            restaurant = "Bdubs";
            break;
        case 13: std::cout << "Steak n Shake" << std::endl;
            restaurant = "Steak n Shake";
            break;
        case 14: std::cout << "Burgerfi" << std::endl;
            restaurant = "Burgerfi";
            break;
        case 15: std::cout << "Red Robin" << std::endl;
            restaurant = "Red Robin";
            break;
        
    }

    std::cout << "I hope youre happy now Syd, you have no other choice but to go to " << restaurant << "! muhahahahaha" << std::endl; //ideally this is where we would present the coupon




    return 0;
}