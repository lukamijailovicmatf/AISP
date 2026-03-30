#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

// globalni skup nad kojim radimo
set<int> s;

void dodaj(int x) {
    s.insert(x);
}

void obrisi(int x) {
    s.erase(x);
}

// radicemo binarnu pretragu
// lower_bound(x) - prva vrednost veca ili jednaka od x
// upper_bound(x) - prva vrednost strogo veca od x
int najblizi(int x) {

    // sa vektorima: lower_bound(begin(v), end(v), x);
    // sa skupovima: s.lower_bound(x);
    auto it = s.lower_bound(x);
    
    if (it == end(s))
        return *(--it);
    
    if (it == begin(s))
        return *it;
    
    int a = *it;
    int b = *(--it);
    
    if (abs(a-x) < abs(b-x))
        return a;
    return b;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // broj komandi koje radimo
    int n;
    cin >> n;
    
    while (n--) {
        
        string op;
        cin >> op;
        
        int x;
        cin >> x;
        
        if (op == "dodaj") {
            dodaj(x);
        } else if (op == "obrisi") {
            obrisi(x);
        } else {
            cout << "Najblizi je " << najblizi(x) << endl;
        }
    }
    
    return 0;
}
