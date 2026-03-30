#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<string> glasovi(n);
    for (int i = 0; i < n; i++)
        cin >> glasovi[i];
    
    sort(begin(glasovi), end(glasovi));
    
    int duzina = 1;
    int maxDuzina = 1;
    
    for (int i = 1; i < n; i++) {
        if (glasovi[i] != glasovi[i-1]) {
            // resetuje se duzina
            duzina = 1;
        } else {
            duzina++;
            if (duzina > maxDuzina)
                maxDuzina = duzina;
        }
    }
    
    cout << maxDuzina << endl;
    
    return 0;
}
