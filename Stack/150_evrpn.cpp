#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for (auto i : tokens) {
        if (i == "+" || i == "-" || i == "*" || i == "/") {
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();

            if (i == "+") {
                st.push(n1 + n2);
            } else if (i == "-") {
                st.push(n1 - n2);
            } else if (i == "*") {
                st.push(n1 * n2);
            } else { // i == "/"
                st.push(n1 / n2);
            }
        } else {
            st.push(stoi(i)); // Convert string to int
        }
    }
    return st.top();
}

int main()
{
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << "Expression result: " << evalRPN(tokens) << endl;
    // Expected: (2 + 1) * 3 = 9

    vector<string> tokens2 = {"4", "13", "5", "/", "+"};

    cout << "Expression result: " << evalRPN(tokens2) << endl;
    // Expected: 4 + (13 / 5) = 6

    return 0;
}
