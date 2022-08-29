// longest common prefix
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> s)
{
    int n = s.size();
    if (n == 0)
    {
        return "";
    }
    string ans = "";
    sort(s.begin(),s.end());
    string a = s[0];
    string b = s[n-1];
    for(int i=0 ; i<a.size() ; i++){
        if(a[i]==b[i]){
            ans += a[i];
        }
        else{
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(str) << endl;
    return 0;
}