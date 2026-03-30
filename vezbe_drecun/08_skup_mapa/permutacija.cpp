#include <iostream>
#include <algorithm>
#include <set>

// MULTISKUP - multiset
// broj pojavljivanja svake vrednosti je bitan
// iste operacije kao i kod skupa
// insert(x) - dodaje x u skup ako se ne nalazi vec u skupu -> O(logn)
// erase(x) - brise element x iz skupa -> O(logn)
// find(x) - da li se elment x nalazi u skupu -> O(logn) -> dobijamo iter na element

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // dimenzija prvog niza
    int n;
    cin >> n;
    
    // pravimo prvi multiskup
    multiset<int> a;
    
    // promenljiva u koju smestamo vrednosti sa ulaza
    int x;
    
    while (n--) {
        cin >> x;
        a.insert(x);
    }
    
    // dimenzija drugog niza
    int m;
    cin >> m;
    
    // pravimo drugi multiskup
    multiset<int> b;
    
    while (m--) {
        cin >> x;
        b.insert(x);
    }
    
    cout << (a == b ? "da" : "ne") << endl;
    
    return 0;
}
