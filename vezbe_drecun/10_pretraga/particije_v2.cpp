#include <iostream>
#include <algorithm>
#include <vector>

// vrsicemo rekurzivnu pretragu i imacemo parcijalnu particiju koju popunjavamo
// redom dok idemo kroz stablo pretrage

using namespace std;

void particije(int n, int maxSabirak, vector<int>& particija) {
    
    if (n == 0) {
        for (int x : particija)
            cout << x << " ";
        cout << endl;
        return;
    }
    
    // daj mi sve particije gde ne koristis maksimalni sabirak
    if (maxSabirak > 1)
        particije(n, maxSabirak - 1, particija);
    
    // ovo ima smisla da radimo dok god n mozemo da zapisemo upotrebom
    // makcimalnog sabirka
    if (maxSabirak <= n) {
        // drugi slucaj je kada koristimo maksimalni sabirak
        particija.push_back(maxSabirak);
        particije(n - maxSabirak, maxSabirak, particija);
        particija.pop_back();
    }
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> particija;
    particije(n, n, particija);
    
    return 0;
}
