#include <iostream>

using namespace std;

int main(){
    int n = 0,f = 0,con = 0;
    bool bo = 0;
    cin>>n;
    for(int j = 0; j < n; j++){
        con=0;
        for(int i = 0; i < 3; i++){
            cin>>bo;
            if(bo==1){
                con++;
            }
        }
        if(con>1){
            f++;
        }
    }
    cout<<f;
    return 0;
}