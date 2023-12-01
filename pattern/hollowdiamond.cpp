#include<bits/stdc++.h>
using namespace std;
void print19(int N) {
    //upside
 // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          

          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          

          iniS-=2;
          
          cout<<endl;
      }

}
int main(int argc, char const *argv[])
{
int n = 1;
print19(n);
return 0;
}