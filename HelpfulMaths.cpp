#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string a;
    cin>>a;
    sort(a.begin(),a.end());

    for(int i = (a.size()/2); i<a.size();i++){
        if(i+1!=a.size()){
            cout<<a[i]<<"+";
        }else{
            cout<<a[i];
        }
    }
}