#include <iostream>
using namespace std;

int SumDigits(int n){
    int sum = 0;

    while(n>0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10; 
    }
    return sum;
}
int main()
{
    cout << SumDigits(12345);
    return 0;
}