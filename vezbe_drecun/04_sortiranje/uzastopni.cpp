#include <iostream>
#include <algorithm>

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
    
    // funkcija koja ce nam izbrisati duplikate iz sortiranog niza
    auto it = unique(begin(niz), end(niz));
    
    // brisemo visak sa kraja novog niza
    niz.erase(it, end(niz));
    
    // azuriramo dimenziju novog niza nakon brisanja viska sa kraja
    n = niz.size();
    
    int pocetak = 0;
    int duzina = 1;
    int maxPocetak = 0;
    int maxDuzina = 1;
    
    for (int i = 1; i < n; i++) {
        if (niz[i] == niz[i-1] + 1) {
            duzina++;
            if (duzina > maxDuzina) {
                maxDuzina = duzina;
                maxPocetak = pocetak;
            }
        } else {
            pocetak = i;
            duzina = 1;
        }
    }
    
    for (int i = maxPocetak; i < maxPocetak + maxDuzina; i++)
        cout << niz[i] << endl;
    
    return 0;
}
