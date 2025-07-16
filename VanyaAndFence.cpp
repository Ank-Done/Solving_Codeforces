#include <iostream>

using namespace std;

int main(){
    int n = 0, h = 0, a = 0, tot = 0;

    cin>>n>>h;

    for(int i = 0; i<n; i++){
        cin>>a;
        if(a<=h){
            tot++;
        }
        if(a>h){
            tot++;
            tot++;
        }
    }
    cout<<tot;
    return 0; 
}