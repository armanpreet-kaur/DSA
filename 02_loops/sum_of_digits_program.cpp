#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        sum = sum + (num % 10); // take last digit
        num = num / 10;         // remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}