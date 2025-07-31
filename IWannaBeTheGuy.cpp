#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 0, a = 0, b = 0, val = 0;
    vector<int> lev(0);
    bool rap = true;
    cin>>n;

    cin>>a;
    for(int i = 0; i<a; i++){
        cin>>val;
        lev.push_back(val);
    }

    cin>>b;
    for(int i = 0; i<b; i++){
        cin>>val;
        lev.push_back(val);
    }
    
    sort(lev.begin(), lev.end());
    auto lastUnique = unique(lev.begin(), lev.end());
    lev.erase(lastUnique, lev.end());

    if (lev.size() != n) {
        rap = false;
    } else {
        for (int i = 0; i < n; i++) {
            if (lev[i] != i + 1) {
                rap = false;
                break;
            }
        }
    }

    if (rap) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}