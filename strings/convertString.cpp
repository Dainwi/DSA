#include <iostream>
#include <string>

using namespace std;

string convertString(string str) {
    bool capitalizeNext = true; // Initialize to true to capitalize the first word

    for (char &c : str) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            }
        } else {
            // Add a space after non-alphabetic characters
            capitalizeNext = true;
        }
    }

    return str;
}

int main()
{
    string str = "I love programming";

    cout << convertString(str);

    return 0;
}