#include <iostream>

using namespace std;

int main(){
    int n = 0,v = 0;

    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>v;

        if(v==1){
            break;
        }
    }
    if(v==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}
