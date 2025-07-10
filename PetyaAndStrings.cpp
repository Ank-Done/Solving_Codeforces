#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    string uno = "", dos = "";
    cin>>uno>>dos;
    transform(uno.begin(), uno.end(), uno.begin(), ::tolower);
    transform(dos.begin(), dos.end(), dos.begin(), ::tolower);


    if(uno<dos){
        cout<<-1;
    }
    if(uno>dos){
        cout<<1;
    }
    if(uno==dos){
        cout<<0;
    }

    return 0;
}