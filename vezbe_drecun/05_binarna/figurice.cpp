#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

/*******************************************************************************
// funkcija koja ispituje da li mozemo sa nekih k igraca da napravimo igru
bool ispitajBrojIgraca(int k, int n, vector<int64_t>& figurice, int64_t t) {
    
    // idemo redom kroz niz jacina figura
    for (int i = 0; i + k - 1 < n; i++) {
        // ukoliko uspemo bilo kako da namestimo tacno k igraca da igraju
        // vracamo vrednost true
        if (k * (figurice[i+k-1] - figurice[i]) <= t)
            return true;
    }
    
    // ako smo prosli kroz ceo niz i pokusali smo da postavimo najslabijeg igraca
    // na svakog moguceg i videli smo da nijedan ne moze da bude najslabiji i da
    // pritom igraju k igraca onda vracamo vrednost false
    return false;
}
*******************************************************************************/

// funkcija ispituje koja je minimalna razlika izmedju najjaceg i najslabijeg igraca
// za najveci moguc broj igraca
int64_t minRazlikaZaKIgraca(int k, int n, vector<int64_t>& figurice) {
    
    // inicijalizujemo na nesto mnogo veliko npr. MAX_INT
    int64_t minRazlika = numeric_limits<int64_t>::max();
    for (int i = 0; i + k - 1 < n; i++)
        minRazlika = min(minRazlika, k * (figurice[i+k-1] - figurice[i]));
    
    return minRazlika;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // broj jacina figura
    int n;
    cin >> n;
    
    // jacine figura
    vector<int64_t> figurice(n);
    for (int i = 0; i < n; i++)
        cin >> figurice[i];
    
    // sortiramo jacine figura kako bismo lakse racunali stvari dalje
    sort(begin(figurice), end(figurice));
    
    // ucitavamo granicu
    int64_t t;
    cin >> t;
    
    // uvek moze bar jedan igrac da igra
    int l = 1;
    // koliko imamo figurica toliko imamo i igraca
    int d = n;
    
    int resenje;
    int razlika;

    while (l <= d) {
        int s = l + (d-l) / 2;
        int minRazlika = minRazlikaZaKIgraca(s, n, figurice);
        
        if (minRazlika <= t) {
            resenje = s;
            razlika = minRazlika;
            l = s + 1; // trazimo bolje
        } else {
            d = s - 1;
        }
    }
    
    cout << resenje << " " << razlika << endl;
    
    return 0;
}
