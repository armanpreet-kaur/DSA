#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10,25,30,45,50};
    int target = 30;

    for (int i =0 ; i<5 ;i++){
        if (arr[i] == target){
            cout << "Found at index:"<<i;
            return 0;
        }
     
    }
    cout <<"Not found";
    return 0;
}