#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//             |
// 13 23 11 17 13

// 13                   13                 23
// 17 13                17     obrtanje    23
// 11 17 13             17   <---------->  17
// 23 11 17 13          23                 17
// 13 23 11 17 13       23                 13

int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int max = 0;
    
    for (int i = n-1; i >= 0; i--) {
        if (a[i] > max)
            max = a[i];
        a[i] = max;
    }
    
    for (int x : a)
        cout << x << endl;
    
    return 0;
}
