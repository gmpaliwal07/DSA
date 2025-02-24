#include<bits/stdc++.h>
using namespace std;
void print7(int n) {
 for(int i=1;i<=n;i++){
            for(int j =n-i;j>=1;j--){
                cout<<" ";}
                for(int k=1;k<=i;k++){
                    cout<<"* ";
                }
                cout<<endl;
            }
        for(int i=1;i<n;i++){
	        for(int j=n-i;j<n;j++){
	            cout<<" ";
	        }
	        for(int k=n;k>i;k--){
	            cout<<"* ";
	        }
	        cout<<endl;
	    }
}
int main(int argc, char const *argv[])
{
int n = 5;
print7(n);
return 0;
}