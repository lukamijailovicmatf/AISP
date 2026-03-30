#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> zarade(n);
    for (int i = 0; i < n; i++)
        cin >> zarade[i];
    
    int q;
    cin >> q;
    
    while (q--) {
        int a, b;
        cin >> a >> b;
        
        int zarada = 0;
        for (int i = a; i <= b; i++)
            zarada = zarada + zarade[i];
        
        cout << zarada << endl;
    }
    
    return 0;
}
