#include<bits/stdc++.h>
using namespace std;
int binarySearch(const std::vector<int>& numbers, int start, int end, int target) {
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (numbers[mid] == target) {
            return mid;
        } else if (numbers[mid] < target) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return -1;
}

std::vector<int> twoSum(const std::vector<int>& numbers, int target) {
    for (int i = 0; i < numbers.size(); ++i) {
        int complement = target - numbers[i];
        int index = binarySearch(numbers, i + 1, numbers.size(), complement);
        if (index != -1) {
            return {i + 1, index + 1};  
        }
    }
    return {};  
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, target;
    vector<int> arr;

    cin >> n >> target;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >>a;
        arr.push_back(a);
    }
    
    std::vector<int> result = twoSum(arr, target);

    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}
