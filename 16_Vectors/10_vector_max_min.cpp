#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {14, 7, 25, 3, 19};

    int min = v[0];
    int max = v[0];

    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] < min)
        {
            min = v[i];
            minIndex = i;
        }

        if(v[i] > max)
        {
            max = v[i];
            maxIndex = i;
        }
    }

    cout << "Minimum = " << min << endl;
    cout << "Minimum index = " << minIndex << endl;
    cout <<endl;
    cout << "Maximum = " << max << endl;
    cout << "Maximum index = " << maxIndex << endl;

    return 0;
}