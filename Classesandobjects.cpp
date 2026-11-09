#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int speed;

    void accelerate(int amount) {
        speed = speed + amount;
    }

    void display() {
        cout << brand << " "
             << model << " "
             << speed << " km/h" << endl;
    }
};


int main (){
    Car car1,car2;
    car1.brand = "BMW";
    car1.model = "M3";
    car1.speed = 100;

    car2.brand = "maruti";
    car2.model = "swift";
    car2.speed = 60;

    car1.accelerate(50);
    car2.accelerate(30);

    car1.display();
    car2.display();
    return 0;
}
