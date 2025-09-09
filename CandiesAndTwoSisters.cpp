#include <iostream>

using namespace std;

int main(){
    int n = 0,r = 0;
    cin>>r;
    for(int i = 0; i<r; i++){
        cin>>n;
        if(n>2){
            if((n%2) == 0){
                cout<<((n/2)-1)<<endl;
            }else{
                cout<<((n/2))<<endl;
            }
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}