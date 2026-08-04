#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v ={10,20,40};
    v.insert(v.begin()+2,30);

    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}