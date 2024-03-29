#include <iostream>
#include <stack>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s)
{

    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        else if (c == '(')
            st.push('(');

        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        char temp = st.top();
        st.pop();
        result += temp;
    }

    cout << result << endl;
}

int main()
{
    string exp = "(a+b)*c";
    infixToPostfix(exp);
    return 0;
}
