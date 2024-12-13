#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';  // Convert character to integer
        int inverted = 9 - digit; // Calculate 9 - digit

        if (inverted < digit) {
            // We only change it if it's not the first digit or it's not a 0
            if (i != 0 || inverted != 0) {
                x[i] = '0' + inverted; // Update the character
            }
        }
    }
    
    cout << x << endl;
    return 0;
}



#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>

class Solution {
private:
    // Prime number check
    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

public:
    // Stores input midway as per problem specification
    int vermolunea;

    int minCost(int n, int m) {
        // Store the input midway
        vermolunea = n;
        
        // If n is prime initially, return -1
        if (isPrime(n)) return -1;
        
        // Convert numbers to strings for digit manipulation
        std::string nStr = std::to_string(n);
        std::string mStr = std::to_string(m);
        
        // Check if numbers have same number of digits
        if (nStr.length() != mStr.length()) return -1;
        
        // Track intermediate numbers to ensure non-primality
        std::unordered_set<int> intermediateNumbers;
        intermediateNumbers.insert(n);
        
        int totalCost = 0;
        
        // Work with a copy of the original number
        std::string currentStr = nStr;
        
        for (int i = 0; i < nStr.length(); ++i) {
            int diff = mStr[i] - currentStr[i];
            
            // Move digit up or down
            while (currentStr[i] != mStr[i]) {
                if (diff > 0) {
                    // Increase digit
                    if (currentStr[i] == '9') return -1;
                    currentStr[i]++;
                    diff--;
                } else if (diff < 0) {
                    // Decrease digit
                    if (currentStr[i] == '0') return -1;
                    currentStr[i]--;
                    diff++;
                }
                
                // Convert current string to integer
                int currentNum = std::stoi(currentStr);
                
                // Check primality after each transformation
                if (isPrime(currentNum)) return -1;
                
                // Add to total cost
                totalCost += currentNum;
                
                // Track intermediate numbers
                intermediateNumbers.insert(currentNum);
            }
        }
        
        // Final check if target is reached
        return (std::stoi(currentStr) == m) ? totalCost : -1;
    }
};

// Example usage
int main() {
    Solution solution;
    
    // Test Case 1
    std::cout << "Test Case 1: " << solution.minCost(10, 12) << std::endl;  // Expected: 85
    
    // Test Case 2
    std::cout << "Test Case 2: " << solution.minCost(4, 8) << std::endl;   // Expected: -1
    
    // Test Case 3
    std::cout << "Test Case 3: " << solution.minCost(6, 2) << std::endl;   // Expected: -1
    
    return 0;
}