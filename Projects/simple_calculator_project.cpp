#include <iostream>
using namespace std;

int main()
{
    int choice;
    int a, b;

    cout << "===== SIMPLE CALCULATOR =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    switch(choice)
    {
        case 1:
            cout << "Answer = " << a + b;
            break;

        case 2:
            cout << "Answer = " << a - b;
            break;

        case 3:
            cout << "Answer = " << a * b;
            break;

        case 4:
            if(b == 0)
            {
                cout << "Division by zero is not possible.";
            }
            else
            {
                cout << "Answer = " << (float)a / b;
            }
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}