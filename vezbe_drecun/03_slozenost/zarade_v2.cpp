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
    
    vector<int> prefiksi(n+1);
    for (int i = 0; i < n; i++)
        prefiksi[i+1] = prefiksi[i] + zarade[i];
    
    int q;
    cin >> q;
    
    while (q--) {
        int a, b;
        cin >> a >> b;
        
        cout << prefiksi[b+1] - prefiksi[a] << endl;
    }
    
    return 0;
}
