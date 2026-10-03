#include <iostream>
using namespace std;

int main()
{
string name;
string collage_name;
int age;
double mark;
printf("-----------Student Profile----------");
    cout << endl;
cout << "Enter your name:";
cin >> name;
cout << "Enter your Collage name:";
cin >> collage_name;
cout << "Enter your age:";
cin >> age;
cout << "Enter your mark:";
cin >> mark;
cout << "percentage:" << mark / 5.0 << "%" << endl;
    cout << endl;
    printf("End");
return 0;

}
