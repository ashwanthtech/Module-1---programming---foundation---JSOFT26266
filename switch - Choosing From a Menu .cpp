#include <iostream>
using namespace std;
int main(){
    int choice;
    cout << "1. chicken pizza  2. cheeseburger  3. orange juice  4. see you later\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "chicken pizza";
            break;

        case 2:
            cout << "cheeseburger";
            break;

        case 3:
            cout << "orange juice";
            break;

        case 4:
            cout << "see you later";
            break;

        default:
            cout << "Invalid choice";
    }
    return 0;
}