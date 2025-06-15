#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (auto i : s) {
        if (i == '(' || i == '{' || i == '[') {
            st.push(i);
        }
        else if ((i == ')' && (st.empty() || st.top() != '(')) ||
                 (i == '}' && (st.empty() || st.top() != '{')) ||
                 (i == ']' && (st.empty() || st.top() != '['))) {
            return false;
        }
        else {
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cout << "Enter brackets string: "; 
    cin >> s;
    if (isValid(s)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}
