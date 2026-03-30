#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // zbir koji trazimo u nizu
    int s;
    cin >> s;
    
    // dimenzija niza
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(begin(a), end(a));
    
    int i = 0;
    int j = n-1;
    int brojParova = 0;
    
    while (i < j) {
        
        if (a[i] + a[j] < s) {
            i++;
        } else if (a[i] + a[j] > s) {
            j--;
        } else {
            i++;
            j--;
            brojParova++;
        }
    }
    
    cout << brojParova << endl;
    
    return 0;
}
