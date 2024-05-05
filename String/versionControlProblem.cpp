#include<bits/stdc++.h>
using namespace std;
int compareVersion(string v1, string v2) {
    int i = 0, j = 0; 
    int v1Len = v1.size();
     int v2Len = v2.size();
      int n1, n2;
    while (i < v1Len || j < v2Len)
    {
        n1 = 0; 
        n2 = 0;
        while (i < v1Len && v1[i]  != '.')
        {
            n1 = n1*10+(v1[i] - '0');
            i++;
        }
        while (j < v2Len &&  v2[j] != '.')
        {
            n2 = n2*10 + (v2[j] - '0');
            j++;
        }
        if(n1 < n2) return -1;
        else if (n1 > n2) return 1;
        i++;
        j++;
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string version1 , version2;
cin >> version1 >> version2;

return 0;
}