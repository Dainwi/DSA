#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char p = 'A' + row - 1;
            // p+= 1;
            cout << p << " ";
            col++;
            // p++;
        }
        cout << endl;
        row++;
    }
    return 0;
}