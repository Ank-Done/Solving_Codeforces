#include <iostream>

using  namespace std;

int main(){
    int a = 0,b = 0,c = 0, tot = 0;
    cin >>a>>b>>c;

    for(int i = 0; i<=c; i++){
        tot += i*a;
    }
    tot = tot-b;
    if(tot<0){
        cout<<0;
    }else{
        cout<<tot;
    }
    return 0;
}