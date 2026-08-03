#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << numbers[0] <<endl;
    cout << numbers[1] <<endl;
    cout << numbers[2] <<endl;
    return 0;
}