// print all duplicates in the input string
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void printDuplicates(string s)
{
    unordered_map<char, int> cnt;
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]]++;
    }
    for (auto it : cnt)
    {
        if (it.second > 1)
        {
            cout << it.first << "  " << it.second << endl;
        }
    }
}

int main()
{
    string s = "test string";
    printDuplicates(s);
    return 0;
}