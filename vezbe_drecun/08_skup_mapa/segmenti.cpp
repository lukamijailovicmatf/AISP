#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // suma koju trazimo
    int z;
    cin >> z;
    
    // dimenzija brojeva koja se ucitava
    int n;
    cin >> n;
    
    // formiramo mapu koju koristimo za prebrojavanje
    // brPrefiksa[3] = 2 -> 2 puta se javila prefiksna suma jednaka vrednosti 3
    map<int, int> brPrefiksa;
    
    // pre samog ucitavanja elemenata u mapi imamo prefiksnu sumu duzine 0 koja
    // se jednom pojavila
    brPrefiksa[0] = 1;
    
    // prefiksna suma
    int suma = 0;
    
    int brSegmenata = 0;
    
    // promenljiva u koju smestamo vrednost sa ulaza
    int x;
    
    while (n--) {
        cin >> x;
        suma = suma + x;
        // koliko postoji prefiksa u mapi cija je vrednost jednaka suma-z za
        // toliko uvecavamo broj segmenata datog zbira
        brSegmenata += brPrefiksa[suma-z];
        // trenutnu prefiksnu sumu dodajemo u mapu tj. vrsimo azuriranje
        brPrefiksa[suma]++;
    }
    
    cout << brSegmenata << endl;
    
    return 0;
}
