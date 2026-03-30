#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<vector<int>> poznaje(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> poznaje[i][j];
        
    int mozdaZvezda = 0;
    for (int i = 1; i < n; i++)
        if (poznaje[mozdaZvezda][i])
            mozdaZvezda = i;
        
    // za preostalu osobu proveravamo da li je zvezda ili ne
    bool zvezda = true;
    
    // istovremeno prolazimo kroz vrstu i kolonu ove osobe
    for (int i = 0; i < n; i++) {
        // izbegavamo dijagonalu
        if (i != mozdaZvezda && !poznaje[i][mozdaZvezda])
            zvezda = false;
        
        if (i != mozdaZvezda && poznaje[mozdaZvezda][i])
            zvezda = false;
    }
    
    if (zvezda)
        cout << mozdaZvezda << endl;
    else
        cout << "nema zvezde" << endl;
    
    return 0;
}
