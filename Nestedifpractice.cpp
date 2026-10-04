#include <iostream>
using namespace std;
int main(){
    int age = 20;
bool hasTicket = true;
if (age >= 18) {
if (hasTicket) {
cout << "Entry allowed";
} else {
cout << "Buy a ticket first";
}
} else {
cout << "Not eligible by age";
}
}