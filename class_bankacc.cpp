#include <iostream>
using namespace std;
class BankAccount {
    public:
    double balance;
};

int main () {
    BankAccount acc;
    acc.balance = 5000;
    acc.balance = -99999;
    cout << "Balance = " << acc.balance;
}