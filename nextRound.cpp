#include <iostream>

using namespace std;

int main(){
    int n = 0,k = 0, r = 0,con = 0, prev = 0;
    cin>>n;
    cin>>k;
    for(int i = 0; i<n; i++){
        cin>>r;
        if(r>0 && i<k){
            con++;
        }else{
            if(prev==r && r>0){
            con++;
        }else{
            break;
        }
        }
        prev = r;
    }
    cout<<con;
    return 0;
}