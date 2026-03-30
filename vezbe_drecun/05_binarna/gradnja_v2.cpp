#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool ispitajRastojanje(int x, int m, vector<int>& lokacije, int n) {
    
    m--;
    int poslednjaLokacija = lokacije[0];
    
    for (int i = 1; i < n && m > 0; i++) {
        if (lokacije[i] - poslednjaLokacija >= x) {
            m--;
            poslednjaLokacija = lokacije[i];
        }
    }
    
    return m == 0;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // broj kuca
    int m;
    cin >> m;
    
    // broj lokacija
    int n;
    cin >> n;
    
    vector<int> lokacije(n);
    for (int i = 0; i < n; i++)
        cin >> lokacije[i];
    
    sort(begin(lokacije), end(lokacije));
    
    // vrsimo binarnu pretragu po svojstvu
    // T T T T T T T T N N N N N N N N N N 
    // trezimo prelomnu tacku
    
    // rastojanje izmedju dve kuce mora biti barem 1
    int l = 1;
    int d = lokacije[n-1];
    int resenje = -1;
    while (l <= d) {
        int s = l + (d-l) / 2;
        // ukoliko je svojstvo ispunjeno za vrednost x = s trazi bolje resenje
        // tj. neko jos vece
        if (ispitajRastojanje(s, m, lokacije, n)) {
            // kada smo naisli na s koje ispunjava svojstvo njega cemo da upamtimo
            resenje = s;
            l = s + 1; // [s+1,d]
        } else {
            d = s - 1; // [l, s-1]
        }
    }
    
    cout << resenje << endl;
    
    return 0;
}
