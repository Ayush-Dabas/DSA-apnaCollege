// valid palindrome
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isChar(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

bool solution(string s)
{
    int n = s.length();
    int l = 0, h = n - 1;
    while (l <= h)
    {
        while (!isChar(s[l]))
        {
            l++;
        }
        while (!isChar(s[h]))
        {
            h--;
        }
        if (toupper(s[l]) != toupper(s[h]))
        {
            return false;
        }
        l++;
        h--;
    }
    return true;
}

int main()
{
    // string s = "race a car";
    string s = "A man, a plan, a canal : Panama";
    cout << solution(s) << endl;
    return 0;
}