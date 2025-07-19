#include <iostream>

using namespace std;

int main(){
    int n = 0, a = 0, b = 0;

    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
            if(a <= 1){
                cout<<"NO"<<endl;
                continue;
            }
            if(b <= 1){
                cout<<"NO"<<endl;
                continue;
            }
            if(b <= 2 && a <=1){
                cout<<"NO"<<endl;
                continue;
            }
            if(a <= 2 && b <=1){
                cout<<"NO"<<endl;
                continue;
            }
            if(a <= 2 && b <=2){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    return 0;
}