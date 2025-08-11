#include <iostream>

using namespace std;

int main(){
    int n,m;
    bool si = true;

    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(si == true){
                    if((i%2) == 0){
                    if(j==m){
                        cout<<"#";
                    }else{                 
                    cout<<".";
                    }
                }else{
                    cout<<"#";
                }
                if(j==m){
                    cout<<endl;
                }
            }else{
                if((i%2) == 0){
                    if(j==1){
                        cout<<"#";
                    }else{                 
                    cout<<".";
                    }
                }else{
                    cout<<"#";
                }
                if(j==m){
                    cout<<endl;
                }
            }
        }
        if(i%2 == 0){
            if(si==true){
                si=false;
            }else{
                si=true;
            }
        }
    }
}