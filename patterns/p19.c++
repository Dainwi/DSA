#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = n;
        while (col >= row)
        {
            cout << "* ";
            col--;
        }

        cout << endl;
        row++;
    }
    return 0;
}
