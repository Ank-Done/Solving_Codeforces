#include <iostream>
#include <string>

using namespace std;

int main(){
    int n=0, x=0;
    char str[5];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>str;
        for(int j=0; j<3;j++){
            if(str[j] == '+' && str[j+1] == '+' ){
                x++;
            }
            if(str[j] == '-' && str[j+1] == '-' ){
                x--;
            }
        }
    }
    cout<<x;
    return 0;
}

