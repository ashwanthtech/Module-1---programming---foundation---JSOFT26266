#include <iostream>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if (str1[0] == str2[0])
    {
        cout << "Strings match";
    }
    else
    {
        cout << "Strings do not match";
    }
    return 0;
}