#include<bits/stdc++.h>
using namespace std;
int satisfiedCustomer(vector<int> &customer, vector<int> &grumpy,int m) {
      int total_satisfied = 0;  //  without using grumpy technique
        int additional_satisfied = 0;  // using grumpy
        int max_additional_satisfied = 0;  // Max  satisfied customers possible in any 'minutes' 

        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                total_satisfied += customers[i];
            } else {
                if (i < minutes) {
                    additional_satisfied += customers[i];
                }
            }
        }

        max_additional_satisfied = additional_satisfied;

        // Slide remaining elements
        for (int i = minutes; i < customers.size(); i++) {
            if (grumpy[i - minutes] == 1) { 
                additional_satisfied -= customers[i - minutes];
            }
            if (grumpy[i] == 1) {
                additional_satisfied += customers[i];
            }
            max_additional_satisfied = max(max_additional_satisfied, additional_satisfied);
        }

        return total_satisfied + max_additional_satisfied;
    
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> customers;
vector<int> grumpy;
int m;
cout <<  satisfiedCustomer(customers, grumpy, m)
return 0;
}