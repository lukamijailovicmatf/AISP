#include <iostream>
#include <algorithm>
#include <map>

// MAPA - map
// kljuc : vrednost
// pretraga se vrsi po kljucevima -> O(logn)
// mapu indeksiramo slicno nizovima

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // ucitavamo broj glasova
    int n;
    cin >> n;
    
    // formiramo mapu u koju cemo smestati glasove
    map<string, int> brGlasova;
    
    while (n--) {
        string ime;
        cin >> ime;
        brGlasova[ime]++;
    }
    
    // iteriramo kroz mapu i trazimo najbrojniji element
    int maxGlasova = 0;
    for (auto p : brGlasova) {
        // p.first - kljuc
        // p.second - vrednost
        if (p.second > maxGlasova)
            maxGlasova = p.second;
    }
    
    cout << maxGlasova << endl;
    
    return 0;
}
