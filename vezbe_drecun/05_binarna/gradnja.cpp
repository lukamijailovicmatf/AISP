#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// ispituje da li je moguc raspored kuca za D >= x
bool ispitajRastojanje(int x, int m, vector<int>& lokacije, int n) {
    
    // prvu kucu smestamo na lokaciju 0
    m--;
    int poslednjaLokacija = lokacije[0];
    
    // pokusavamo da smestimo i naredne kuce na odredjene lokacije
    // pokusavamo u svakom trenutku na trenutnu poziciju da stavimo kucu
    for (int i = 1; i < n && m > 0; i++) {
        // gledamo da li je trenutna lokacija udaljena dovoljno
        // od poslednje lokacije
        if (lokacije[i] - poslednjaLokacija >= x) {
            m--;
            poslednjaLokacija = lokacije[i];
        }
    }
    
    // ukoliko smo postavili sve kuce onda smo uspeli i vracamo vrednost true
    // ako je m > 0 i nakon postavljanja svih kuca to znaci da nismo uspeli da
    // postavimo sve kuce na lkacije koje imamo pa vracamo vrednost false
    return m == 0;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // m - broj kuca
    // n - broj lokacija
    
    int m;
    int n;
    cin >> m >> n;
    
    vector<int> lokacije(n);
    for (int i = 0; i < n; i++)
        cin >> lokacije[i];
    
    sort(begin(lokacije), end(lokacije));
    
    int d = 1;
    while (ispitajRastojanje(d, m, lokacije, n))
        d++;
    
    cout << d-1 << endl;
    
    return 0;
}
