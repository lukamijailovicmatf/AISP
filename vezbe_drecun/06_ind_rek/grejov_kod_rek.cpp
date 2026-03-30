#include <iostream>
#include <algorithm>

using namespace std;

string grejov_kod(unsigned n, unsigned k) {
    
    if (n == 0)
        return "";
    
    if (k < (1u << (n - 1)))
        return "0" + grejov_kod(n - 1, k);
    else
        return "1" + grejov_kod(n - 1, (1u << n) - 1 - k);
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    unsigned n;
    cin >> n;
    
    unsigned k;
    cin >> k;
    
    cout << grejov_kod(n, k) << endl;
    
    return 0;
}
