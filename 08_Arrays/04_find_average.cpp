#include <iostream>
using namespace std;

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50};
    int size = 5;

    int sum = 0;

    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    int average = sum/size;
    
    cout <<"Average: "<<average;
    return 0;
}