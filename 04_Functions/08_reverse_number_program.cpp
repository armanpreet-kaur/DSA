#include <iostream>
using namespace std;

int reverse (int n){
    int rev = 0;

    while(n>0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    return rev;
}
int main()
{
    cout << reverse(12345);
    return 0;
}