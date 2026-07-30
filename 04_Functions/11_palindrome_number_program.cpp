#include <iostream>
using namespace std;

bool palindrome(int n){
    int original = n;
    int rev = 0;

    while(n>0){
        rev = rev * 10  +  n % 10;
        n = n/10;

    }
    return original == rev;
}
int main()
{
    if(palindrome(121)){
        cout <<"Palindrome";
    }else{
        cout <<"Not palindrome";
    }
    
    return 0;
}