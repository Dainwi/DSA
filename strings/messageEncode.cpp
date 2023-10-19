#include <iostream>
#include <string>

using namespace std;

string encode(const std::string &s) {
    string ans;
    ans.reserve(s.size() * 2); // Preallocate enough memory for the encoded string
    int count = 1;

    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && s[i] == s[i + 1]) {
            count++;
        } else {
            ans += s[i] + to_string(count);
            count = 1;
        }
    }
    return ans;
}

int main()
{
    string str = "aaaabbc";

    cout << encode(str);

    return 0;
}