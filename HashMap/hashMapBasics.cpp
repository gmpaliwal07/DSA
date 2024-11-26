#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt",  "r", stdin);
freopen("output.txt",  "w", stdout);
#endif


    std::unordered_map<std::string, int> map;

    // Insert elements
    map["apple"] = 10;
    map["banana"] = 20;
    map["cherry"] = 30;

    // Access elements
    std::cout << "Value of apple: " << map["apple"] << std::endl;

    // Check if a key exists
    if (map.find("banana") != map.end()) {
        std::cout << "Banana exists in the map." << std::endl;
    }

    // Iterate over elements
    for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Remove an element
    map.erase("cherry");

    // Check the size
    std::cout << "Map size: " << map.size() << std::endl;

    return 0;
}
