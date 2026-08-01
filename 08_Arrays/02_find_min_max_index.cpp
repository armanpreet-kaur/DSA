#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[] = { 5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 0; i < size; i++){
        if (num[i] < smallest)
        {
            smallest = num[i];
            smallestIndex = i;
        }

        if (num[i] > largest)
        {
            largest = num[i];
            largestIndex = i;
        }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Smallest index: " << smallestIndex << endl;
    cout << endl;
    cout << "Largest: " << largest << endl;
    cout << "Largest index: " << largestIndex << endl;

    return 0;
}