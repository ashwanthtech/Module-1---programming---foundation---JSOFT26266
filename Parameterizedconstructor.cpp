#include <iostream>
using namespace std;

class student {
public:
    int rollNo;
    string name;

   student(int r, string n) {
        rollNo = r;
        name = n;
    }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main () {
    student s1(101, "Asha");
    student s2(102, "Rahul");
    s1.display();
    s2.display();
    return 0;
}