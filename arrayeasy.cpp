#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    int arr[100];
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    cout << "\nSum = " << sum;
    cout << "\nAverage = " << average;

    return 0;
}