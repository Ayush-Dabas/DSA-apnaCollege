// remove consecutive characters
#include <iostream>
#include <string>
using namespace std;

string remove(string s)
{
    int n = s.length();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            continue;
        }
        // else
            ans += s[i];
    }
    return ans;
}

int main()
{
    string s = "aabaa";
    cout << remove(s) << endl;

    return 0;
}