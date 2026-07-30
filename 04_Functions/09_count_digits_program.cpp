#include <iostream>
using namespace std;

int CountDigits(int n ){
    int count = 0;
    while(n>0){
        count++ ;
        n = n/10;
    }
    return count;
}
int main()
{
    cout <<"count:" << CountDigits(12345);
    return 0;
}