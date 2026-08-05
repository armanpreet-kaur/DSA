#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4};
    int n = 4;

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i =0; i<n; i++)
    {
        currentSum = currentSum + arr[i];
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout <<"Maximum subarray sum: "<<maxSum;

    
    return 0;
}