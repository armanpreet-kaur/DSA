#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3, 7, 10, 15, 20, 25, 30};

    int target = 20;

    int start = 0;
    int end = v.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(v[mid] == target)
        {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Not found";

    return 0;
}