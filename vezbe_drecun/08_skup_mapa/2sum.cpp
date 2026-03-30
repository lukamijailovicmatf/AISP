#include <iostream>
#include <algorithm>
#include <set>

// SKUP - set
// nebitan je redosled elemenata
// bitno je koji se elementi pojavljuju, a ne koliko puta se javljaju
// insert(x) - dodaje x u skup ako se ne nalazi vec u skupu -> O(logn)
// erase(x) - brise element x iz skupa -> O(logn)
// find(x) - da li se elment x nalazi u skupu -> O(logn) -> dobijamo iter na element

// invarijanta: u skupu se cuvaju sve vrednosti do pozicije koju trenutno posmatramo

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // suma koju trazimo
    int s;
    cin >> s;
    
    // broj brojeva koje ucitavamo
    int n;
    cin >> n;
    
    // pravimo skup
    set<int> brojevi;
    
    // broj parova koje na kraju vracamo
    int brojParova = 0;
    
    // promenljiva u koju cemo smestati trenutni procitani broj sa ulaza
    int x;
    
    while (n--) {
        cin >> x;
        if (brojevi.find(s - x) != end(brojevi))
            brojParova++;
        brojevi.insert(x);
    }
    
    cout << brojParova << endl;
    
    return 0;
}
