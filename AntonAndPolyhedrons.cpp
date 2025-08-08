#include <iostream>
#include <string>

//So EZ tbh

using namespace std;

int main(){
    int n = 0, tot = 0;
    string shape;

    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>shape;

        if(shape == "Tetrahedron" ){
            tot+=4;
        }
        if(shape == "Cube"){
            tot+=6;
        }
        if(shape == "Octahedron"){
            tot+=8;
        }
        if(shape == "Dodecahedron"){
            tot+=12;
        }
        if(shape == "Icosahedron"){
            tot+=20;
        }
    }

    cout<<tot;
    return 0;
}