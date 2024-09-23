#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> monotonicIncreasingStack(const vector<int>& nums) {
    stack<int> s;

    for (int num : nums) {
        while (!s.empty() && s.top() > num) {
            s.pop();
        }
        s.push(num);
    }

    return s;
}

int main() {
    vector<int> nums = {1,7,9,5,8};
    stack<int> result = monotonicIncreasingStack(nums);

    cout << "Monotonic increasing stack (from bottom to top) is: ";
    vector<int> temp;
    while (!result.empty()) {
        temp.push_back(result.top());
        result.pop();
    }
    for (auto it = temp.begin(); it != temp.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
