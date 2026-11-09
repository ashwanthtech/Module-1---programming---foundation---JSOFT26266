#include <iostream>
using namespace std;
class Rectangle 
{
public:
    double length;
    double width;

    double area(){
        return length * width;
    }
    double perimeter (){
        return 2 * (length + width);
    }

};
int main(){
    Rectangle r1,r2;
    r1.length = 5; r1.width = 3;
    r2.length = 10; r2.width = 2;
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r2.perimeter()<< endl;
    return 0;

}