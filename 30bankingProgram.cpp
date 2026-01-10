#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdrawl(double balance);


int main() {
    double balance = 0;
    int choice = 0;

    do {
    std::cout << "******************" << std::endl;
    std::cout << "Enter your choice" << std::endl;
    std::cout << "******************" << std::endl;
    std::cout << "Option 1: Show Balance" << std::endl;
    std::cout << "Option 2: Deposit Money" << std::endl;
    std::cout << "Option 3: Withdrawal Money" << std::endl;
    std::cout << "Option 4: Exit" << std::endl;

    std::cin >> choice;

    std::cin.clear();//look into this
    fflush(stdin);//look into this

    switch(choice) { //
        case 1: showBalance(balance);
            break;
        case 2: balance = balance + deposit();
            showBalance(balance);
            break;
        case 3: balance = balance - withdrawl(balance);
            showBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting" << std::endl;
            break;
        default: std::cout << "Invalid choice" << std::endl;

    }

    }
    while(choice != 4);





    return 0;
}

void showBalance(double balance) {

    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;

}

double deposit() {

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0) {
        return amount;

    }
    else{
        std::cout << "That is not a valid amount" << std::endl;
        return 0;
    }

    

}

double withdrawl(double balance) {
    double amount = 0;

    std::cout <<"Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "insufficient funds" << std::endl;
        return 0;

    }
    else if(amount < 0) {
        std::cout << "That's not a valid amount" << std::endl;
        return 0;

    }
    else {
        return amount;
    }



    return amount;

}


