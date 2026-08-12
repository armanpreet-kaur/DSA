#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 60;
    int start = 0;
    int end = sizeof(arr)-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            cout <<"found at index:"<<mid;
            break;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;       
        }
    }
    cout <<endl;
    return 0;
}