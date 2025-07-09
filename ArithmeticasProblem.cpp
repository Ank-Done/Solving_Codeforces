#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 0, c = 0,tot = 0;
    cin>>a>>b>>c;
    for(a; a<=b;a++){
        if(a%c == 0){
            tot++;
        }
    }

    cout<<tot;
    return 0;
}