#include <iostream>

using namespace std;

int main(){
    int n = 0, a = 0, b = 0, c = 0;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a;
        if(a != b){
            c++;
            b=a;
        }
    }
    cout<<c;
    return 0;
}