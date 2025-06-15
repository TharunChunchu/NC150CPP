#include <iostream>
#include <vector>
using namespace std;

void solve(string ts, vector<string> &res, int oc, int cc, int i, int n) {
    if (i == 2 * n) {
        res.push_back(ts);
        return;
    }
    if (oc < n) {
        solve(ts + "(", res, oc + 1, cc, i + 1, n);
    }
    if (cc < oc) {
        solve(ts + ")", res, oc, cc + 1, i + 1, n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    solve("", res, 0, 0, 0, n);
    return res;
}

int main()
{
    int n = 3;
    vector<string> result = generateParenthesis(n);
    cout << "Valid parentheses combinations for n = " << n << ":\n";
    for (auto s : result) {
        cout << s << '\n';
    }
    return 0;
}
