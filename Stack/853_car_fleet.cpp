#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
//monotonic stack cars which slow down them
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int, double>> vp;
    int n = position.size();

    for(int i = 0; i < n; i++) {
        vp.push_back({position[i], (double)(target - position[i]) / speed[i]}); 
    }
    sort(vp.begin(), vp.end());

    stack<double> st;
    int res = 0;

    for(int i = n - 1; i >= 0; i--) {
        while (!st.empty() && vp[i].second <= st.top()) { 
            st.pop();
        }
        st.push(vp[i].second);
        res++;
    }
    return res;
}

int main()
{
    int target = 12;
    vector<int> position = {10, 8, 0, 5, 3};

    vector<int> speed = {2, 4, 1, 1, 3};

    cout << "Number of car fleets: " << carFleet(target, position, speed) << endl;

    return 0;
}
