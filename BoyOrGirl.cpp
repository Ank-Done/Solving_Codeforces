#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    int con=0;
    cin>>a;
    for(int i = 1; i<=a.size()+1; i++){
        if(a[0]==NULL){
            break;
        }
        if(a[0]==a[i]){
            a.erase(i,1);
            i=0;
        }else{
            if(a.size() == 1){
                con++;
                break;
            }
            }
        if(i+1==a.size()){
            a.erase(0,1);
            i=0;
            con++;
        }
    }
    
    if(con%2 != 0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}