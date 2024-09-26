#include<bits/stdc++.h>
using namespace std;
struct TreeNode {

  
    Node* links[26];
   
    bool flag = false;

    bool containsKey(char ch) {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {
    private :
    Node* root;
public:
    Trie() {
        root= new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
        //  mover to ref trie
            node = node->get(word[i]);
        }
   
        node->setEnd();
    }
    
    bool search(string word) {
      Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
         Node* node = root;
        for (int i = 0; i < prefix.length(); i++) {
            if (!node->containsKey(prefix[i])) {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

vector<int> sumPrefixScores(vector<string>& words) {
    int count = 0;
    vector<int> ans;
    Trie* obj = Trie();
    for(auto it : words) {
        obj->insert(it);
    obj->search(words) ? cnt++;
    }

    ans.push_back(cnt);
    cnt = 0;
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif

return 0;
}