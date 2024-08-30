#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int length = nums.size();
    vector<int> output(length, 1);

    // Calculate left products
    int left = 1;
    for (int i = 0; i < length; i++) {
        output[i] = left;
        left *= nums[i];
    }

    // Calculate right products and combine with left products
    int right = 1;
    for (int i = length - 1; i >= 0; i--) {
        output[i] *= right;
        right *= nums[i];
    }

    return output;
}

int main() {
    string input;
    cout << "Enter the array elements (comma-separated): ";
    getline(cin, input);

    vector<int> nums;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, ',')) {
        nums.push_back(stoi(temp));
    }

    vector<int> result = productExceptSelf(nums);

    for (size_t i = 0; i < result.size(); i++) {
        if (i != 0) cout << ",";
        cout << result[i];
    }
    cout << endl;

    return 0;
}