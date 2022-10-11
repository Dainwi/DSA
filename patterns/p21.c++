#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        int s = 2;
        while (s <= i)
        {
            cout << "* ";
            s++;
        }
        int k = 2;
        while (k <= i)
        {
            cout << "* ";
            k++;
        }
        int l = n - i + 1;
        while (l >= 1)
        {
            cout << l << " ";
            l--;
        }
        cout << endl;
        i++;
    }
}