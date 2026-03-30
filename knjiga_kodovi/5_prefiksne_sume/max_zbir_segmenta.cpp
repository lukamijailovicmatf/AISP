#include <iostream>
#include <algorithm>

using namespace std;

//                 |
// 4 -5 2 3 7 -8 9 10
// zbir_prefiksa = 22
// min_zbir_prefiksa = -1
// zbir_segmenta = 23
// max = 23

int main(){
    
    int n;
    cin >> n;
    
    int zbir_prefiksa = 0;
    int min_zbir_prefiksa = zbir_prefiksa;
    int max = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        zbir_prefiksa = zbir_prefiksa + x;
        int zbir_segmenta = zbir_prefiksa - min_zbir_prefiksa;
        if (zbir_segmenta > max)
            max = zbir_segmenta;
        if (zbir_prefiksa < min_zbir_prefiksa)
            min_zbir_prefiksa = zbir_prefiksa;
    }
    
    cout << max << endl;
    
    return 0;
}
