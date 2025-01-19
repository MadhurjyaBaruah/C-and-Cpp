#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int size, item, count = 0;
    cout << "Enter the array size: ";
    cin >> size;

    int arr[size]; // Declare the array
    cout << "Enter the array elements (size is " << size << "):\n";

    // Loop to input array elements
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Display the array in a box format
    // Top border
    cout << "\n+";
    for (int i = 0; i < size; i++)
    {
        cout << "----+";
    }

    // Middle row with elements
    cout << "\n|";
    for (int i = 0; i < size; i++)
    {
        cout << setw(2) << arr[i] <<"  |";
    }

    // Bottom border
    cout << "\n+";
    for (int i = 0; i < size; i++)
    {
        cout << "----+";
    }
    cout << endl;

    // Input the item to search
    cout << "Now give the item you are looking for: ";
    cin >> item;

    // Loop to search for the item
    for (int i = 0; i < size; i++)
    {
        if (item == arr[i])
        {
            count = 1; 
            cout << "Element found at location " << i + 1 << endl;
        }
    }

    if (count == 0) 
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
