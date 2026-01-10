#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdrawal(double balance);

int main() {

    double balance = 1000;
    int choice = 0;

    do {
        std::cout << "BANKING PROGRAM" << std::endl;
        std::cout << "Option 1: Show Balance" << std::endl;
        std::cout << "Option 2: Deposit" << std::endl;
        std::cout << "Option 3: Withdraw" << std::endl;
        std::cout << "Option 4: Exit." << std::endl;

        std::cin >> choice; 
        std::cin.clear();
        fflush(stdin);

        switch(choice) {
            case 1: showBalance(balance);
                break;
            case 2: balance = balance + deposit();
                showBalance(balance);
                break;
            case 3: balance = balance - withdrawal(balance);
                showBalance(balance);
                break;
            case 4: std::cout << "Thanks for visiting!" << std::endl;
                break;
            default: std::cout << "That is not a valid entry" << std::endl;

        }
    }
    while(choice != 4);



    return 0;
}

void showBalance(double balance) {
    std::cout << "Balance: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit() {
    double amount = 0;

    std::cout << "How much would you like to deposit: ";
    std::cin >> amount;

    if(amount < 0) {
        std::cout << "Invalid entry" << std::endl;
        return 0;
    }
    else {
        return amount;
    }
}

double withdrawal(double balance) {
    double amount = 0;

    std::cout << "Amount to be withdrawn: $";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "Insufficient Funds" << std::endl;
        return 0;
    }
    else if(amount < 0) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }
    else {
        return amount;
    }
}