#include <iostream>
using namespace std;

int fabonacci(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i--)
    {
        ans = i + ans;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int printAns, num;

    cin >> num;

    printAns = fabonacci(num);

    cout << printAns;

    return 0;
}
