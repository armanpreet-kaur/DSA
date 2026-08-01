#include <iostream>
using namespace std;

bool palindrome(string s, int start, int end)
{
    // Base case
    if (start >= end)
        return true;

    // If first and last characters are different
    if (s[start] != s[end])
        return false;

    // Recursive call
    return palindrome(s, start + 1, end - 1);
}

int main()
{
    string s = "madam";

    if (palindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}