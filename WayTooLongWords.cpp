#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    string pal;

    cin>>a;

    for(int i = 0; i<a; i++){
        cin>>pal;
        if(pal.length()<=10){
            cout<<pal<<endl;
        }else{
            cout<<pal[0]<<(pal.length()-2)<<pal[pal.size()-1]<<endl;
        }
    }
    return 0;
}