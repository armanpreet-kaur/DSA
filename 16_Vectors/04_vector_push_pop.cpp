#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Before: " << numbers.size() << endl;

    numbers.pop_back();

    cout << "After: " << numbers.size() << endl;
    
    return 0;
}