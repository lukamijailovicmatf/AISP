#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

// ako je ogranicenje dimenzije niza do 1000 onda ce nam slozenost biti sporija
// O(n^2)

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    set<int> brojevi;
    int brojTrojki = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(brojevi.find(-v[i]-v[j]) != end(brojevi))
                brojTrojki++;
            brojevi.insert(v[i]);
        }
    }
    
    cout << brojTrojki << endl;
    
    return 0;
}
