#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <vector<int>> map(5,vector<int>(5));
    int tot = 0, savi = 0, savj = 0;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>map[i][j];
                if(map[i][j]==1){
                    savj = j;
                break;
                }
            }
            if(map[i][savj]==1){
                savi = i;
                break;
            }
        }
                if(savi<2){
                    tot += 2-savi; 
                }
                if(savi>2){
                    tot += savi-2;
                }
                if(savj<2){
                    tot += 2-savj; 
                }
                if(savj>2){
                    tot += savj-2;
                }
    //for(int i = 0; i<5; i++){
    //    for(int j = 0; j<5; j++){
    //        cout<<map[i][j]<<" ";
    //   }
    //    cout<<endl;
    //}
    cout<<tot;
    return 0;
            }