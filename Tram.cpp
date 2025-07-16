#include <iostream>

using namespace std;

int main(){
    int n = 0,a = 0,b = 0,tot = 0, min = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        tot=tot-a;
        tot=tot+b;
        if(min<tot){
            min = tot;
        }
    }
    cout<<min;
    return 0;
}