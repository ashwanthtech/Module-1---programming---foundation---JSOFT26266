
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance = 0;

public:
    void setBalance(double amount) {
        if (amount >= 0)
            balance = amount;
        else
            cout << "Invalid amount!" << endl;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    acc.setBalance(5000);
    acc.setBalance(-200);

    cout << acc.getBalance() << endl;

    return 0;
}
