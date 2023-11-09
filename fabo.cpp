#include <iostream>
using namespace std;

int fabonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else if (n > 1)
    {
        return fabonacci(n - 1) + fabonacci(n - 2);

    }
}

int main(){
    int n;
}