#include <bits/stdc++.h>
using namespace std;
bool isNStraightHand(vector<int> &hand, int groupSize)
{
    if (hand.size() % groupSize != 0) {
            return false;
        }

        map<int, int> mpp;
        for (auto card : hand) {
            mpp[card]++;
        }

        while (!mpp.empty()) {
            int first = mpp.begin()->first;
            for (int i = 0; i < groupSize; i++) {
                if (mpp[first + i] > 0) {
                    mpp[first + i]--;
                    if (mpp[first + i] == 0) {
                        mpp.erase(first + i);
                    }
                } else {
                    return false;
                }
            }
        }

        return true;
    }


int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> hands = {1, 2, 3, 6, 2, 3, 4, 7, 8};
int groupSize = 3;
int ans = isNStraightHand(hands, groupSize);
 (ans == 1)
    ? cout << "true" : cout << "false";
return 0;
}
