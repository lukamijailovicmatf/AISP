#include <iostream>
#include <algorithm>
#include <queue>

// RED - queue
// push(x) - dodaj element x na kraj
// pop() - ukloni element sa pocetka
// front() - procitaj element sa pocetka
// slozenost operacija je O(1)

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    // invarijanta: u redovima se nalaze svi brojevi pomnozeni sa 2, 3 ili 5
    // koji jos nisu generisani
    queue<uint64_t> q2;
    queue<uint64_t> q3;
    queue<uint64_t> q5;
    
    // clan od kojeg krecemo generisanje do n-tog clana
    uint64_t t = 1;
    
    q2.push(2);
    q3.push(3);
    q5.push(5);
    
    // sada n puta generisemo naredni broj
    while (n--) {
        // trenutni novi element bice nam najmanji izmedju prva tri elementa
        // koji se nalaze na pocetku svakog od redova
        t = min({q2.front(), q3.front(), q5.front()});
        
        // dodavanje elemenata na kraj
        q2.push(2*t);
        q3.push(3*t);
        q5.push(5*t);
        
        // skidanje najmanjeg sa pocetka
        if (q2.front() == t)
            q2.pop();
        
        if (q3.front() == t)
            q3.pop();
        
        if (q5.front() == t)
            q5.pop();
    }
    
    // ispisujemo n-ti clan
    cout << t << endl;
    
    return 0;
}
