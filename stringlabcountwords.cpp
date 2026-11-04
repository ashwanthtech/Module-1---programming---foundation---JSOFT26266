#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str;
    int count = 0;
    cout << "Enter a line: ";
    getline(cin, str);

    stringstream ss(str);
    string word;

    while (ss >> word)
    {
        count++;
    }
    cout << "Number of words: " << count;
    return 0;
}