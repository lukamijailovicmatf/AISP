#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// |      |    <----> iteratori
// 0 1  2 3  4 <----> pozicije
// 4 2 -2 5 -4

int najveciZbirPrefiksa(const vector<int>& a) {
    
    int maxZbir = 0;
    
    for (auto it = begin(a); it != end(a); it++)
        maxZbir = max(maxZbir, accumulate(begin(a), it, 0));
    
    return maxZbir;
}

int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int resenje = najveciZbirPrefiksa(a);
    
    cout << resenje << endl;
    
    return 0;
}
