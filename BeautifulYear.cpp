#include <iostream>
#include <string>

using namespace std;

int main(){
    int n1 = 0,n2 =0;

    cin>>n1;
    n2 = n1;
    n2++;
        do{
            if(n2%10 != ((n2/10)%10) && n2%10 !=(((n2/10)/10)%10) && n2%10 != ((((n2/10)/10)/10)%10)){
                if(((n2/10)%10) != (((n2/10)/10)%10) && ((n2/10)%10) != ((((n2/10)/10)/10)%10)){
                    if((((n2/10)/10)%10) != ((((n2/10)/10)/10)%10)){
                        break;
                    }
                }
            }
            n2++;
    }while(true);
    cout<<n2;
}