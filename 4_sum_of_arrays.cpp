#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Code logic to input array
    int n;
    if (!(cin >> n)) return 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    // loop to print out array
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << nums[i];
    }
    cout << '\n';
    return 0;

    // Code logic to do sum of first & the last element in array
    if(nums.empty()){
        return 0;
    }
    int first = nums[0];
    // find the total size of the array
    int n = nums.size();
    int last = nums[n-1];

    int sum =0;
    int sum=first+last;
}