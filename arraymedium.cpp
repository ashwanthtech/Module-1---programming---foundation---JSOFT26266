#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    int max, min;
    int even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

   
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

  
    max = arr[0];
    min = arr[0];

  
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "\nMaximum = " << max;
    cout << "\nMinimum = " << min;
    cout << "\nEven numbers = " << even;
    cout << "\nOdd numbers = " << odd;

    return 0;
}