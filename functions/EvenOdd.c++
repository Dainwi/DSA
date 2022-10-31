#include <iostream>
using namespace std;

bool isEven(int num)
{

    if (num & 1)
    {
        return 0;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if (isEven(a))
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is odd";
    }

    return 0;
}
