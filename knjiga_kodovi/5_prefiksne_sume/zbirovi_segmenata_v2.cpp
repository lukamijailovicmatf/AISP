#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 0 1 2 3 4  <------> pozicije
// 1 2 3 4 5  <------> niz

// 0 1 2 3 4  5  <------> pozicije
// 0 1 3 6 10 15 <------> prefiksne_sume

int main(){
    
    int n;
    cin >> n;
    
    vector<int> prefiksne_sume(n+1);
    prefiksne_sume[0] = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        prefiksne_sume[i+1] = prefiksne_sume[i] + x;
    }
    
    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int zarada = prefiksne_sume[b+1] - prefiksne_sume[a];
        cout << zarada << endl;
    }
    
    return 0;
}
