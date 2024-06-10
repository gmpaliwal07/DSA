#include<bits/stdc++.h>
using namespace std;
int subarrayWithXOR(vector<int> arr) {
    std::unordered_map<int, int> prefixXORFreq;
    int prefix_XOR = 0;
    int count = 0;
    
    for (int i = 0; i < A.size(); ++i) { 2wq1   asD GILO;P}{|;P|
        prefix_XOR ^= A[i];
        
        if (prefix_XOR == B) {
            count++;
        }
        
       
        int required_prefix_XOR = prefix_XOR ^ B;
        
     
        if (prefixXORFreq.find(required_prefix_XOR) != prefixXORFreq.end()) {
            count += prefixXORFreq[required_prefix_XOR];
        }
        

        prefixXORFreq[prefix_XOR]++;
    }
    
    return count;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {4, 2, 2, 6, 4}
int k = 6;
return 0;
}