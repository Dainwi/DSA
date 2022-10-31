#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout << "Enter the first num: ";
    cin >> a;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the second num: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Please input valid operator";
        break;
    }

    return 0;
}