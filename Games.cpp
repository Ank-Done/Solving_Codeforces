#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n=0, tot=0;
    cin>>n;
    vector<int> a(n), b(n);

    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(b[i] == a[j]){
                tot++;
            }
        }
    }
    cout<<tot;

    return 0;
}