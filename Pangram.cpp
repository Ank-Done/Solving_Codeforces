#include <iostream>
#include <string>

using namespace std;

bool checkPangram(string &s) {

  	for(char ch = 'a'; ch <= 'z'; ch++) {
    	bool found = false;
        
        for(int i = 0; i < s.length(); i++) {
        	if(ch == tolower(s[i])) {
            	found = true;
                break;
            }
        }
      
        if(found == false)
            return false;
    }
    return true;
}

int main(){
    int n, al= 0; 
    char a;
    string base, alphabet = " abcdefghijklmnopqrstuvwxyz";  
    cin>>n;
    cin>>base;

    if(n<26){
        cout<<"NO";
        return 0;
    }
    if (checkPangram(base) == true)
        cout << "YES";  
    else
        cout << "NO"; 

    return 0;
}