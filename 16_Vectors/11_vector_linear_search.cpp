#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 25, 7, 40, 18};

    int target = 40;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == target)
        {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not found";

    return 0;
}