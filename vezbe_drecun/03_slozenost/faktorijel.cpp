#include <iostream>
#include <algorithm>

using namespace std;

uint64_t faktorijel(int k) {
    
    uint64_t proizvod = 1;
    for (int i = 1; i <= k; i++)
        proizvod *= i;
    
    return proizvod;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cout << faktorijel(i) << endl;
    
    return 0;
}
