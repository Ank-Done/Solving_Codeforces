#include <iostream>

using namespace std;

int main(){
    int r = 0, p = 0, q = 0, e = 0;
    cin>>r;

    for(int i = 0; i<r; i++){
        cin>>p>>q;
        if(p<=(q-2)){
            e++;
        }
    }

    cout<<e;
    return 0;
    
}