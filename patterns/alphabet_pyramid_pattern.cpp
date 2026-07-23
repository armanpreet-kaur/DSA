#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Increasing alphabets
        for(int j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }

        // Decreasing alphabets
        for(int j = i - 2; j >= 0; j--)
        {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}