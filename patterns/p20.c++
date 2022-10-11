#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // for 1st triangle
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        // for 2nd triangle
        for (int s = 2; s <= i; s++)
        {
            cout << "* ";
        }

        // for 3rd triangle
        for (int k = 2; k <= i; k++)
        {
            cout << "* ";
        }

        // for 4th triangle
        for (int l = n-i+1; l >= 1; l--)
        {
            cout << l << " ";
        }

        cout << endl;
    }

    return 0;
}