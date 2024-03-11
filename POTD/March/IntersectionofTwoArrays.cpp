 #include<bits/stdc++.h>
 using namespace std;
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  unordered_set<int> set1(nums1.begin(), nums1.end());
   vector<int> result;
    
    for (int num : nums2) { 
        if (set1.count(num)) {
            result.push_back(num);
            set1.erase(num); 
        }
    }
    
    return result; 
    }
 int main(int argc, char const *argv[])
 {
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
 int n , m;
 cin >> n >> m;
 vector<int> arr1;
 vector<int> arr2;
 for(auto it = 0 ; it < n; it++) {
    int a;
    cin >>a;
    arr1.push_back(a);
 }
 for(auto it = 0 ; it < m; it++) {
    int b;
    cin >>b;
    arr1.push_back(b);
 } 

  vector<int> res = intersection(arr1, arr2);
  for(auto it : res) 
  {
   cout << it << " ";
  }
 return 0;
 }