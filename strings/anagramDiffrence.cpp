#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int getMinimumAnagramDifference(string &str1, string &str2)
{

    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
    {
        return 0;
    }

    unordered_map<char, int> map;

    for (int i = 0; i < n1; i++)
    {
        map[str1[i]]++;
    }

    int count = 0;

    for (int i = 0; i < n2; i++)
    {
        if (map[str2[i]] > 0)
        {
            map[str2[i]]--;
        }

        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str1, str2;
    str1 = "except";
    str2 = "accept";
    cout << getMinimumAnagramDifference(str1, str2);
    return 0;
}