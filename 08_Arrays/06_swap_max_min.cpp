#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4,2,7,8,1,2,5,4};
    int size = 8;

    int smallest = 0;
    int largest = 0;

    //find indexes of smallest and largest
    for (int i = 1; i<size; i++){
        if(arr[i] < arr[smallest]){
            smallest = i;
        }

        if(arr[i] > arr[largest]){
            largest = i;
        }
    }
    //swap min and max
    swap(arr[smallest],arr[largest]);

    //print array
    for (int i=0; i<size; i++){
        cout << arr[i] <<" ";

    }
    cout <<endl;
    return 0;
}