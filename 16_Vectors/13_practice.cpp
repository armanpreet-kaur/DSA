#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v ={2, 5, 8, 12, 16, 20};
    int target = 15;

    int start = 0;
    int end = v.size()-1;

    while(start <= end)
    {
        int mid = start+(end-start)/2;

        if(v[mid] == target){
            cout <<"found at index: "<<mid;
            return 0;
        }
        else if(v[mid] < target)
        {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    cout <<"-1";

    return 0;
}

