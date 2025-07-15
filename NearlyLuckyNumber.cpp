#include <iostream>

using namespace std;

int main(){
    unsigned long long int n = 0, d=0;

    cin>>n;

    do{
        if(n==0){
            break;
        }
        if((n%10)==4){
            d++;
        }
        if((n%10)==7){
            d++;
        }
        n = n/10;
    }while(n>0);
    if(d == 4 || d==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}