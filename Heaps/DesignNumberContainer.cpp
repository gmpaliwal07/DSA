#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld  long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
void file_i_o()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

class NumberContainers {
    private:
    unordered_map<int,int> ind_mp;
unordered_map<int, set<int> > num_mp;
public:



    NumberContainers() {
       
        
    }
    
    void change(int index, int number) {
          if (ind_mp.count(index)) {
            int old_num = ind_mp[index];
            if (old_num != number) {
                num_mp[old_num].erase(index);
                if (num_mp[old_num].empty()) {
                    num_mp.erase(old_num);
                }
            }
        }
        ind_mp[index] = number;
        num_mp[number].insert(index);
    }
    
    int find(int number) {
         if (num_mp.count(number) && !num_mp[number].empty()) {
            return *num_mp[number].begin();
        }
        return -1;
    }
};
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
NumberContainers().find(10);
NumberContainers().change(1, 20);
return 0;
}