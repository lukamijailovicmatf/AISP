#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 0 1  2 3  4 -> pozicije
// 4 2 -2 5 -4

int maxZbirPrefiksa(const vector<int>& a) {
    
    int maxZbir = 0;
    int n = a.size();
    
    for (int i = 0; i < n; i++) {
        int zbir = 0;
        for (int j = 0; j <= i; j++) {
            zbir = zbir + a[j];
            if (zbir > maxZbir)
                maxZbir = zbir;
        }
    }
    
    return maxZbir;
}

int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int resenje = maxZbirPrefiksa(a);
    
    cout << resenje << endl;
    
    return 0;
}
