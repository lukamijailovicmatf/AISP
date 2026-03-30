#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int s;
    cin >> s >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(begin(a), end(a));
    
    int brojParova = 0;
    for (int i = 0; i < n; i++) {
        if (binary_search(begin(a), begin(a) + i, s - a[i]))
            brojParova++;
    }
    
    cout << brojParova << endl;
    
    return 0;
}
