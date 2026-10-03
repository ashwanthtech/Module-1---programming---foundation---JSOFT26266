#include <iostream>
using namespace std;
int main(){
    bool userExists = true;
    bool passwordCorrect = false;
    if (userExists)
{
    if (passwordCorrect)
        cout << "Welcome";
    else
        cout << "Wrong password";
}
else
    cout << "No such user";

}