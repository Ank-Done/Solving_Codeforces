#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    string a = "", b;
    cin>>a;
    b = a[0];

    transform(b.begin(),b.end(),b.begin(),::toupper);
    a[0]=b[0];
    cout<<a;
    return 0;

}