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
    
    int tezinskiZbir = 0;
    int zbirSvih = 0;
    
    // inicijalizujemo pocetne vrednosti
    for (int i = 0; i < n; i++) {
        zbirSvih += a[i];
        tezinskiZbir += i * a[i];
    }
    
    int maxZbir = tezinskiZbir;
    int maxI = 0;
    
    for (int i = 1; i < n; i++) {
        tezinskiZbir = tezinskiZbir - zbirSvih + n * a[i-1];
        if (tezinskiZbir > maxZbir) {
            maxZbir = tezinskiZbir;
            maxI = i;
        }
    }
    
    cout << maxI << endl;
    cout << maxZbir << endl;
    
    return 0;
}
