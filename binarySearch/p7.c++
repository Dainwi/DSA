// Find squar root using binarySearch.

#include <iostream>
using namespace std;

long long int sqrtInteger(int num)
{
    int s = 0, e = num, ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        else if (square < num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int num, int precision, int tempSol)
{
    double factor = 1, ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

double getSqrt(int n)
{
    int tempSol = sqrtInteger(n);
    return morePrecision(n, 3, tempSol);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    cout << "Answer is: " << getSqrt(n) << endl;

    return 0;
}
