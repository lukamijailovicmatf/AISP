#include <iostream>
#include <algorithm>
#include <map>

// vrednost(x) - koja je vrednost pridruzena broju x
// dodaj(x,y) - x se slika u y (vrednost za kljuc x je jednaka y)
// obrisi(x) - brisemo neki kljuc x
// uvecaj(x,y) - uvecaj vrednost od x za y
// uvecajSve(y) - primenjuje uvecavanje vrednosti za svaki element ove strukture

using namespace std;

// globalna mapa nad kojom radimo
map<int, int> m;

// globalna promenljiva za uvecavanje elemenata
int uvecanje = 0;

int vrednost(int x) {
    return m[x] + uvecanje;
}

void dodaj(int x, int y) {
    m[x] = y - uvecanje;
}

void obrisi(int x) {
    m.erase(x);
}

void uvecaj(int x, int y) {
    m[x] += y;
}

void uvecajSve(int y) {
    uvecanje += y;
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
        int y;
        
        if (op == "vrednost") {
            cin >> x;
            cout << "Vrednost je " << vrednost(x) << endl;
        } else if (op == "dodaj") {
            cin >> x;
            cin >> y;
            dodaj(x,y);
        } else if (op == "obrisi") {
            cin >> x;
            obrisi(x);
        } else if (op == "uvecaj") {
            cin >> x;
            cin >> y;
            uvecaj(x,y);
        } else {
            cin >> y;
            uvecajSve(y);
        }
    }
    
    return 0;
}
