#include <iostream>
#include <string>

using namespace std;

string removeVowels(string inputString) {
    string ans;

    for (int i = 0; i < inputString.length(); i++) {
        char c = tolower(inputString[i]);

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            ans += inputString[i];
        }
    }

    return ans;
}

int main()
{
    string s = "Moobile";

    cout << removeVowels(s);

    return 0;
}