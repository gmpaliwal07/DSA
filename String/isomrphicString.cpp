#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string &st1, string &st2) {
  if (st1.length() != st2.length()) return false; // Handle different lengths

  unordered_map<char, char> char_map1;
  unordered_map<char, char> char_map2;

  for (int i = 0; i < st1.length(); ++i) {
    char char1 = st1[i];
    char char2 = st2[i];


    if (char_map1.count(char1) > 0 && char_map1[char1] != char2) {
      return false;
    }
    if (char_map2.count(char2) > 0 && char_map2[char2] != char1) {
      return false;
    }

    char_map1[char1] = char2;
    char_map2[char2] = char1;
  }

  return true;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout);
#endif
string st1, st2;
cin >> st1 >> st2;
int ans = isomorphic(st1, st2);
ans == 1 ? cout <<  "true" : cout <<  "false";
return 0;
}


// true  => 1
// false => 0;
// map 
// compare mpp elemnt 