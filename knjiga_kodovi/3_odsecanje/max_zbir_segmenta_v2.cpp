#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// -2  3  2  -3 -3  4  -2  5  -8   3

// -2  1  3   0 -3  1  -1  4  -4  -1
//     3  5   2 -1  3   1  6  -2   1
//        2  -1 -4  0  -2  3  -5  -2
//           -3 -6 -2  -4  1  -7  -4
//              -3  1  -1  4  -4  -1
//                  4   2  7  -1   2
//                     -2  3  -5  -2
//                         5  -3   0
//                            -8  -5
//                                 3

int maxZbirSegmenta(const vector<int>& a) {
    
    int n = a.size();
    int max = 0;
    int i = 0;
    while (i < n) {
        int z = 0;
        int j;
        for (j = i; j < n; j++) {
            z = z + a[j];
            if (z < 0)
                break;
            if (z > max)
                max = z;
        }
        i = j+1;
    }
    return max;
}

int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int resenje = maxZbirSegmenta(a);
    
    cout << resenje << endl;
    
    return 0;
}
