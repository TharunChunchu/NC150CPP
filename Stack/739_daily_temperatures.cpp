#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
//maintaing monotonic stack to get nearst big temperature
vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> res;
    stack<int> st;
    int n = temperatures.size();

    for(int i = n - 1; i >= 0; i--) {
        while (!st.empty() && temperatures[i] >= temperatures[st.top()])
            st.pop();

        if (st.empty()) {
            res.push_back(0);
        } else {
            res.push_back(st.top() - i);
        }
        st.push(i);
    }
    reverse(res.begin(), res.end()); 
    return res;
}

int main()
{
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> result = dailyTemperatures(temperatures);

    cout << "Daily temperatures result:" << endl;
    for (auto i : result) {
        cout << i << " "; 
    }
    cout << endl;

    return 0;
}
