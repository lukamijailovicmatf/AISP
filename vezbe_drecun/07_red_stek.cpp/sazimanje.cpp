#include <iostream>
#include <algorithm>
#include <vector>

// STEK - stack
// dodajemo elemente na vrh i skidamo sa vrha
// push(x) - dodaj element x na vrh
// pop() - ukloni element sa vrha
// top() - procitaj element sa vrha
// slozenost operacija O(1)

using namespace std;

// koristicemo radi lakse implementacije vector (zbog ispisa), ali ponasanje je
// isto kao i kod steka
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // koliko brisemo
    int k;
    cin >> k;
    
    // broj elemenata koje ucitavamo
    int n;
    cin >> n;
    
    // stek vrednosti
    vector<int> vrStek;
    
    // stek duzine tj. brojaca
    vector<int> brStek;
    
    // vrednost koju ucitavamo sa ulaza
    int vr;
    
    while (n--) {
        
        cin >> vr;
        
        // ukoliko je procitan razlicit broj od prethodnog na vrhu steka
        // vrednosti i ukoliko je broj ponavljanja tog broja na vrhu steka
        // vrednosti veci ili jednak od k onda taj broj i sva njegova
        // ponavljanja uklanjamo
        if (!vrStek.empty() && vrStek.back() != vr && brStek.back() >= k) {
            vrStek.pop_back();
            brStek.pop_back();
        }
        
        if (!vrStek.empty() && vrStek.back() == vr) {
            brStek.back()++;
        } else {
            vrStek.push_back(vr);
            brStek.push_back(1);
        }
    }
    
    // provera kada se dodje do kraja niza
    // ukoliko imam nesto na steku i ukoliko je poslednji segment veci ili
    // jednak od k onda obrisi i njega
    if (!vrStek.empty() && brStek.back() >= k) {
        vrStek.pop_back();
        brStek.pop_back();
    }
    
    // idemo kroz oba vektora paralelno i ispisujemo rezultat
    for (int i = 0; i < vrStek.size(); i++)
        while (brStek[i]--)
            cout << vrStek[i] << " ";
    cout << endl;
    
    return 0;
}
