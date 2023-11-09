#include <iostream>
using namespace std;


int main() {
    int s, e, w;
    cin>>s>>e>>w;

    while(s <= e){
        int temp = (s - 32) * 5/9;
        cout<<temp<<endl;
        s += w;
    }

    return 0;
}