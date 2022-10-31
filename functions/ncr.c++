#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int ncr(int n, int r)
{
    int numarator = factorial(n);

    int denomenator = factorial(r) * factorial(n - r);

    return (numarator / denomenator);
}

int main(int argc, char const *argv[])
{
    int n, r;
    cin >> n >> r;

    cout<< "Answer is: "<< ncr(n, r);
    return 0;
}
