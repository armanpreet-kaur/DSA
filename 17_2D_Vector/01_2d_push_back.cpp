#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>>matrix;

    matrix.push_back({1, 2, 3});
    matrix.push_back({4, 5, 6});
    matrix.push_back({7, 8, 9});

    cout << matrix[1][2];
    
    return 0;
}