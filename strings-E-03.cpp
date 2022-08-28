// valid parantheses
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isPair(char a, char b){
    if(a == '(' && b == ')')
        return true;
    else if(a == '[' && b == ']')
        return true;
    else if(a == '{' && b == '}')
        return true;
    return false;
}

bool isValid(string s)
{
    stack<char> st;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]=='(' || s[i]=='[' || s[i] == '{'){
            st.push(s[i]);
        }
        else{
            char ch = st.top();
            // cout << ch << endl;
            if(!isPair(ch,s[i])){
                return false;
            }
            st.pop();
        }
    }
    return true;
}

void solution(string s)
{
    if (isValid(s))
    {
        cout << "String " << s << " is a valid string\n";
    }
    else
    {
        cout << "String " << s << " is an invalid string\n";
    }
}

int main()
{
    string s = "()[]{]";
    solution(s);

    return 0;
}