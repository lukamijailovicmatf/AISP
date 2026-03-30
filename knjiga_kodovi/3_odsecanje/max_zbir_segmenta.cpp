#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

// 0  1 2  3 4  5 -> pozicije
// 2 -3 4 -1 3 -2

int maksZbirSegmenta(const vector<int>& a) {
    
    int n = a.size();
    
    int max = numeric_limits<int>::min();
    
    for (int i = 0; i < n; i++) {
        int z = 0;
        for (int j = i; j < n; j++) {
            z = z + a[j];
            if (z > max)
                max = z;
        }
    }
    
    return max;
}

int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int resenje = maksZbirSegmenta(a);
    
    cout << resenje << endl;
    
    return 0;
}
