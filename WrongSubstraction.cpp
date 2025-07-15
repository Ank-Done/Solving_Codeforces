#include <iostream>

using namespace std;

int main(){
    int c = 0, t = 0;

    cin>>c>>t;

    for(int i = 0; i<t; i++){
        if((c%10)==0){
            c =c/10;
        }else{
            c = c-1;
        }
    }
    cout<<c;
    return 0;
    
}