//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //You need to complete this fucntion
    
  #define MOD 1000000007

long long power(int N, int R) {
int mod = 1000000007;
        
        if(R==0)
        return 1;
        
        long ans=0;
        if(R%2 == 0){
            ans = power(N,R/2);
            ans = ( ans * ans) %mod;
        }
        
        else{
        ans = N%mod;
        ans =  ( ans * power(N ,R-1) %mod ) % mod;
        }
        
        return (ans)%mod;

}
};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Endsb