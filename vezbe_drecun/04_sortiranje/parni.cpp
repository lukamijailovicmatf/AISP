#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> niz(n);
    for (int i = 0; i < n; i++)
        cin >> niz[i];
    
    sort(begin(niz), end(niz));
    
    int brojParnih = 0;
    int duzina = 1;
    
    for (int i = 1; i < n; i++) {
        if (niz[i] == niz[i-1]) {
            duzina++;
        } else {
            if (duzina % 2 == 0)
                brojParnih++;
            duzina = 1;
        }
    }
    
    if (duzina % 2 == 0)
        brojParnih++;
    
    cout << brojParnih << endl;
    
    return 0;
}
