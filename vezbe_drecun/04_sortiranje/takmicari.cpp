#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Takmicar {
    string ime;
    int bodovi;
};

// true - takmicar a treba da se nadje ispred takmicara b
bool poredi(Takmicar a, Takmicar b) {
    
    // nerastuce po broju poena
    if (a.bodovi > b.bodovi)
        return true;
    
    if (b.bodovi > a.bodovi)
        return false;
    
    // ako imaju isti broj poena onda ih uredjujemo po imenu neopadajuce
    return a.ime < b.ime;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<Takmicar> takmicari(n);
    for (int i = 0; i < n; i++)
        cin >> takmicari[i].ime >> takmicari[i].bodovi;
    
    sort(begin(takmicari), end(takmicari), poredi);
    
    for (int i = 0; i < n; i++)
        cout << takmicari[i].ime << " " << takmicari[i].bodovi << endl;
    cout << endl;
    
    return 0;
}
