#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int rollNo;
    string Name;
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << Name << endl;
        cout << "------------------" << endl;
    }
};
int main()
{
    student s1;
    student s2;

    s1.rollNo = 101;
    s1.Name = "Ashwanth MK";

    s2.rollNo = 102;
    s2.Name = "Sahal";

    s1.display();
    s2.display();
    return 0;
}