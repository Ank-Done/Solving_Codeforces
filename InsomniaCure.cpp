#include <iostream>

using namespace std;

int main(){
    unsigned long long int k = 0,l = 0,m = 0,n = 0,d = 0,t = 0;

    cin>>k>>l>>m>>n>>d;

    if(k == 1){
        cout<<d;
        return 0;
    }
    if(l == 1){
        cout<<d;
        return 0;
    }
    if(m == 1){
        cout<<d;
        return 0;
    }
    if(n == 1){
        cout<<d;
        return 0;
    }

    for(int i = 1; i<=d; i++){
        if((i%k) == 0){
            t++;
            continue;
        }
        if((i%l) == 0){
            t++;
            continue;
        }
        if((i%m) == 0){
            t++;
            continue;
        }
        if((i%n) == 0){
            t++;
            continue;
        }
    }
    cout<<t;
    return 0;
}