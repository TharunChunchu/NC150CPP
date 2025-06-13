#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> lv{height[0]}, rv{height[n-1]};
    for(int i = 1; i < n; i++) {
        lv.push_back(max(lv[i-1], height[i]));
        rv.push_back(max(rv[i-1], height[n-1-i]));
    }
    reverse(rv.begin(), rv.end());

    int res = 0;
    for(int i = 0; i < n; i++) {
        res += min(lv[i], rv[i]) - height[i];
    }
    return res;
}

int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << "Trapped water: " << trap(height) << endl;

    return 0;
}
