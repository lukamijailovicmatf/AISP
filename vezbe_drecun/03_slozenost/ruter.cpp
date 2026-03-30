#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    // uint64_t - unsigned long long
    uint64_t duzina = 0;
    uint64_t levo = 0;
    uint64_t desno = 0;
    
    for (int i = 0; i < n; i++) {
        duzina = duzina + i * a[i];
        desno = desno + a[i];
    }
    
    uint64_t minDuzina = duzina;
    for (int i = 1; i < n; i++) {
        levo = levo + a[i-1];
        desno = desno - a[i-1];
        duzina = duzina + levo - desno;
        
        if (duzina < minDuzina)
            minDuzina = duzina;
    }
    
    cout << minDuzina << endl;
    
    return 0;
}
