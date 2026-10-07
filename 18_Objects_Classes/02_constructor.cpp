#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa; 
    
    Student(string s, int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }
};
int main()
{
    Student s1("Arman", 3, 9.9);
    Student s2("Mehak", 4, 9.8);
    cout <<s1.name<<endl;
    cout <<s2.name<<endl;    
    return 0;
}