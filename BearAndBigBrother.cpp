#include <iostream>

using namespace std;

int main(){
    int a = 0,b = 0,y = 0;

    cin>>a>>b;

    do{
        a=a*3;
        b=b*2;
        y++;
    }
    while(a<=b);

    cout<<y;
    return 0;
}