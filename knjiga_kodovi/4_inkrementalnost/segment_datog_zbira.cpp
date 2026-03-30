#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 0 1 2 3 4  5 6 7 8 9 <------> pozicije
// 1 2 3 5 1 -1 1 5 3 2 <------> niz

int brojSegmenataDatogZbira(const vector<int>& a, int trazeniZbir) {
    
    int brojSegmenata = 0;
    int n = a.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int zbir = 0;
            for (int k = i; k <= j; k++)
                zbir = zbir + a[k];
            if (zbir == trazeniZbir)
                brojSegmenata++;
        }
    }
    
    return brojSegmenata;
}

int main(){
    
    int zbirTrazenogSegmenta;
    cin >> zbirTrazenogSegmenta;
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int resenje = brojSegmenataDatogZbira(a, zbirTrazenogSegmenta);
    
    cout << resenje << endl;
    
    return 0;
}
