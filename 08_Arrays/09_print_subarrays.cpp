#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6};
    int n = 3;

    for(int start = 0; start < n; start++)
    {

        for(int end = start; end < n; end++)
        {

            for(int i = start; i <= end; i++)
            {
                cout << arr[i] << " " ;
            }
        
        cout << endl;
        }
    }
    return 0;
}