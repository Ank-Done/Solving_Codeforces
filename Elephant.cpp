#include <iostream>

using namespace std;

int main(){
    int i = 0, c = 0;
    cin>>i;

    do{
        i=i-5;
        c++;
    }
    while(i>0);
    cout<<c;
    return 0;
}