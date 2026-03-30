#include <iostream>
#include <algorithm>
#include <deque>

// DEK - deque
// uklanjanje i dodavanje i na pocetak i na kraj reda
// front() - procitaj element sa pocetka
// push_front(x) - dodaj element x na pocetak
// pop_front() - ukloni element sa pocetka
// back() - procitaj element sa kraja
// push_back(x) - dodaj element x na kraj
// pop_back() - ukloni element sa kraja
// slozenost operacija O(1)

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    deque<int> d;
    
    while (n--) {
        int x;
        cin >> x;
        
        if (x < d.front())
            d.push_front(x);
        else
            d.push_back(x);
    }
    
    // prolazimo kroz dek i ispisujemo sadrzaj (mozemo ga indeksirati)
    for (int i = 0; i < d.size(); i++)
        cout << d[i] << " ";
    cout << endl;
    
    return 0;
}
