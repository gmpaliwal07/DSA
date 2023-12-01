#include<bits/stdc++.h>
using namespace std;
void print20(int n) {
    //upside
    for (int i = 1; i <= n; i++)
    {
        //star
       for (int j = 1; j <=i; j++)
       {
            cout << "*";
       }
      
//space
       for (int j = 1; j <(n-i+1); j++)
       {
        cout << " ";
       }
 for (int j = 1; j <(n-i+1); j++)
       {
        cout << " ";
       }
//star
 for (int j = 1; j <=i; j++)
       {
            cout << "*";
       }


       cout << endl;
    }

    // downside

    for (int i = n-1; i >0; i--)
    {
        //star 
        for (int j=i; j >=1; j--)
        {
            cout << "*";
        }


        //space
        for (int j = (n-i+1); j >1; j--)
        {
            cout << " ";
        }
                //space
        for (int j = (n-i+1); j >1; j--)
        {
            cout << " ";
        }
        
         //star 
        for (int j=i; j >=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    


    
    
}
int main(int argc, char const *argv[])
{
int n =3;
print20(n);
return 0;
}