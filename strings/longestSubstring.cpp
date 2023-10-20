#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int getLengthofLongestSubstring(string s, int k) {
    int n = s.length();
    if (n == 0 || k == 0) {
        return 0;
    }

    unordered_map<char, int> charCount; // To store character frequencies
    int left = 0; // Left pointer of the sliding window
    int maxLen = 0; // Length of the longest valid substring

    for (int right = 0; right < n; right++) {
        charCount[s[right]]++; // Add the character at the right end to the map

        // If the number of distinct characters exceeds k, move the left pointer
        while (charCount.size() > k) {
            charCount[s[left]]--;
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]);
            }
            left++;
        }

        // Update the maximum length if a longer valid substring is found
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string str = "ababbc";
    int k = 2;
    int length = getLengthofLongestSubstring(str, k);
    cout << "Length of the longest valid substring: " << length << endl;
    return 0;
}