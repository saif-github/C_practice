/ C++ Program to find the even occurring elements
// in given array
#include <iostream>
using namespace std;

// Function to find the even occurring elements
// in given array
void printRepeatingEven(int arr[], int n)
{
    long long _xor = 0L;
    long long pos;

    // do for each element of array
    for( int i = 0; i < n; ++i)
    {
        // left-shift 1 by value of current element
        pos = 1 << arr[i];

        // Toggle the bit everytime element gets repeated
        _xor ^= pos;
    }

    // Traverse array again and use _xor to find even
    // occurring elements
    for (int i = 0; i < n; ++i)
    {
        // left-shift 1 by value of current element
        pos = 1 << arr[i];

        // Each 0 in _xor represents an even occurrence
        if (!(pos & _xor))
        {
            // print the even occurring numbers
            cout << arr[i] << " ";

            // set bit as 1 to avoid printing duplicates
            _xor ^= pos;
        }
    }
}

// Driver code
int main()
{
    int arr[] = { 9, 12, 23, 10, 12, 12, 15, 23,
                 14, 12, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printRepeatingEven(arr, n);

    return 0;
}
