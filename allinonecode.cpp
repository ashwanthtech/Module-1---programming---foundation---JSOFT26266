#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

bool isEven(int n)
{
    return n % 2 == 0;
}

// Function to find maximum
int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    cout << add(5, 5) << endl;
    cout << square(12) << endl;

    cout << (isEven(10) ? "Even" : "Odd") << endl;

    cout << findMax(3, 7) << endl;
    cout << factorial(5) << endl;
    return 0;
}