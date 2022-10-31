#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int num = n, d, p = 1, s = 0, dif;
    while (num > 0)
    {
        d = num % 10;
        p = p * d;
        s = s + d;
        dif = p - s;
        num = num / 10;
    }
    return dif;
}

int main()
{
    int n, d, p = 1, s = 0, dif;
    cout << "Enter the  number: ";
    cin >> n;

    // while (n > 0)
    // {
    //     d = n % 10;
    //     p = p * d;
    //     s = s + d;
    //     dif = p - s;
    //     n = n / 10;
    // }

    // cout << n;

    subtractProductAndSum(n);

    return 0;
}