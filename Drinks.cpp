#include <iostream>

using namespace std;

int main(){
    long double tot = 0, n = 0, a = 0;

    cin>>n;

    for(int i = 0; i < n; i++ ){
        cin>>a;
        tot += a/n; 
    }

    cout << tot;

    return 0;
}