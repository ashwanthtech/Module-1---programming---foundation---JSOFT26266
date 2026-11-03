#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    int search, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    cout << "\nArray in reverse: ";
    for(int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\nEnter value to search: ";
    cin >> search;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            cout << "Value found at index: " << i << endl;
            count++;
        }
    }
  
    if(count == 0)
    {
        cout << "Value not found";
    }
    else
    {
        cout << "Value appears " << count << " times";
    }
    return 0;
}