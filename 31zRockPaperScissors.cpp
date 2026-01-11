#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = userChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = computerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    showWinner(player, computer);

    

    
    return 0;
}

char userChoice() {

    char player;

    std::cout << "Rock Paper Scissors Game" << std::endl;

    do {
        std::cout << "Choose one of the following" << std::endl;
        std::cout << "---------------------------" << std::endl;
        std::cout << "'r' for Rock" << std::endl;
        std::cout << "'s' for Scissors" << std::endl;
        std::cout << "'p' for Paper" << std::endl;
        std::cin >> player;
    }
    while(player != 'r' && player != 's' && player != 'p');

    return player;

}


char computerChoice() {

    srand(time(0));
    int num = (rand() % 3) + 1;

    switch(num) {
        case 1: return 'r';
        case 2: return 's';
        case 3: return 'p';
    }


    return 0;


}


void showChoice(char choice) {

    switch(choice) {
        case 'r': std::cout << "Rock" << std::endl;
            break;
        case 'p': std::cout << "Paper" << std::endl;
            break;
        case 's': std::cout << "Scissors" << std::endl;
            break;
        default: std::cout << "Invalid Entry";
    }

}


void showWinner(char player, char computer) {

    switch(player) {
        case 'r':   if(computer == 'r') {
                        std::cout << "Its a tie!";
                    }
                    else if(computer == 's') {
                        std::cout << "You win!";
                    }
                    else {
                        std::cout << "You lose";
                    }
                    break;
        case 's':   if(computer == 's') {
                        std::cout << "Its a tie!";
                    }
                    else if(computer == 'p') {
                        std::cout << "You win!";
                    }
                    else {
                        std::cout << "You lose";
                    }
                    break;
        case 'p':   if(computer == 'p') {
                        std::cout << "Its a tie!";
                    }
                    else if(computer == 'r') {
                        std::cout << "You win!";
                    }
                    else {
                        std::cout << "You lose";
                    }
                    break;
    }

}
