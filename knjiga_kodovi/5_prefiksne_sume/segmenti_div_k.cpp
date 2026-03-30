#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//           |
// 1 8 2 3 4
// k = 3
// n = 5

// zbir = 4
// broj = 4

// za i = 0 imamo 2, za i = 1 imamo 0, za i = 2 imamo 1, za i = 3 imamo 1,
// za i = 4 imamo 0

int brojSegmenataZbiraDeljivogSaK(const vector<int>& a, int k) {
    
    int n = a.size();
    int broj = 0;
    
    for (int i = 0; i < n; i++) {
        int zbir = 0;
        for (int j = i; j < n; j++) {
            zbir = zbir + a[j];
            if (zbir % k == 0)
                broj++;
        }
    }
    
    return broj;
}

int main(){
    
    int k;
    cin >> k;
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int brojDeljivih = brojSegmenataZbiraDeljivogSaK(a, k);
    
    cout << brojDeljivih << endl;
    
    return 0;
}
