#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int may = 0, men = 0;
    string s;
    char s2(100);

    cin>>s;  

    for(int i = 0; i<s.length(); i++){
        s2 = s[i];
        if(isupper(s2)){
            may++;
        }else{
            men++;
        }
    }
    if(may==men){
            transform(s.begin(),s.end(),s.begin(), ::tolower);
        }else{
            if(may>men){
                transform(s.begin(),s.end(),s.begin(), ::toupper);
            }else{
                transform(s.begin(),s.end(),s.begin(), ::tolower);
        }
    }

    cout<<s;
    return 0;
}