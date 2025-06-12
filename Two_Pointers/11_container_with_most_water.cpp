#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int j = 0;
    int k = height.size() - 1;
    int res = min(height[j], height[k]) * (k - j);
    while (j < k) {
        if (height[j] < height[k]) {
            j++;
        } else {
            k--;
        }
        res = max(res, min(height[j], height[k]) * (k - j));
    }
    return res;
}

int main() {
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(heights);
    cout << "Maximum area: " << result << endl;
    return 0;
}
