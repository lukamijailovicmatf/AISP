#include <iostream>
#include <algorithm>
#include <queue>

// RED SA PRIORITETOM - priority queue
// push(x) - negde se u skup dodaje element x
// pop() - iz skupa se uklanja element koji ima najvecu vrednost (po default-u)
// top() - cita element koji ima najvecu vrednost u skupu
// ne zavisi od redosleda ubacivanja i izbacivanja vec samo od velicine elemenata
// slozenost operacija push() i pop() je O(logn), gde je n broj elemenata
// slozenost operacije top() je O(1)
// mozemo napraviti da nam se umesto najveceg elementa na vrhu nalazi najmanji element

// invarijanta: cuvamo k najboljih tj. najvecih brojeva od do sada procitanih

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // broj zadataka koje je ucenik radio
    int n;
    cin >> n;
    
    // broj zadataka koje je najbolje uradio
    int k;
    cin >> k;
    
    // pravimo red sa prioritetom
    // po default-u izbacuje najveci element, ali mi menjamo tako da izbacuje
    // najmanji
    priority_queue<int, vector<int>, greater<int>> najvecihK;
    
    // vrednost koju ucitavamo sa ulaza
    int x;
    
    // ucitavamo prvih k  elemenata
    for (int i = 0; i < k; i++) {
        cin >> x;
        najvecihK.push(x);
    }
    
    // obradjujemo preostalih n - k elemenata
    for (int i = k; i < n; i++) {
        cin >> x;
        if (x > najvecihK.top()) {
            najvecihK.pop();
            najvecihK.push(x);
        }
    }
    
    int zbir = 0;
    while (!najvecihK.empty()) {
        zbir = zbir + najvecihK.top();
        najvecihK.pop();
    }
    
    cout << zbir << endl;
    
    return 0;
}
