#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    set<int> brojevi;
    int najveci = 0;
    
    int x;
    
    while(n--) {
        cin >> x;
        if(brojevi.find(x) != end(brojevi) && x > najveci)
            najveci = x;
        brojevi.insert(x);
    }
    
    if(najveci > 0)
        cout << najveci << endl;
    else
        cout << "nema" << endl;
    
    return 0;
}
