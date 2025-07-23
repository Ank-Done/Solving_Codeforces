#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    int s;

    cin>>a>>b;
    s = a.size();

    for(int i = 0; i<s; i++ ){
        if(a[i] == b[i]){
            cout<<0;
        }else{
            cout<<1;
        }
    }
    return 0;
}