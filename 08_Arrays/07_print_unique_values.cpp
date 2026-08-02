#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int size = 7;

    // Outer loop: select each element one by one
    for (int i = 0; i < size; i++)
    {
        // Count how many times arr[i] appears
        int count = 0;

        // Inner loop: check arr[i] with every element
        for (int j = 0; j < size; j++)
        {
            // If both values are equal, increase count
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // If the number appeared only once, print it
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}