#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;

string leftRotate(string str, int d) {
    int n = str.length();
    // Ensure that d is within the valid range of [0, n - 1]
    d = d % n;

    // Create a new string to store the left-rotated result
    string rotatedStr = str.substr(d) + str.substr(0, d);
    
    return rotatedStr;
}

string rightRotate(string str, int d) {
    int n = str.length();
    // Ensure that d is within the valid range of [0, n - 1]
    d = d % n;

    // Create a new string to store the right-rotated result
    string rotatedStr = str.substr(n - d) + str.substr(0, n - d);
    
    return rotatedStr;
}

int main()
{
    string str = "codingninjas";

    cout << "Right Rotation: " << rightRotate(str, 3) << endl;
    cout << "Left Rotation: " << leftRotate(str, 2) << endl;
    return 0;
}