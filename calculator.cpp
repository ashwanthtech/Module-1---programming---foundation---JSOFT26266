#include <iostream>
using namespace std;
 double add(double a, double b) {
    return a + b;
 }
 double subtract(double a, double b) {
    return a - b;
 }
 double multiply(double a, double b) {
    return a * b;
 }
 double divide(double a, double b) {
    return a / b;
 }
  
 int main() {
    double a,b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout << "addition: " << add(a,b) << endl;
    cout << "subtraction: " << subtract(a,b) << endl;
    cout << "multiplication: " << multiply(a,b) << endl;
    cout << "division: " << divide(a,b) << endl;
    return 0;
 }