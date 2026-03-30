#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // [a,b]: [0,b] - [0,a-1] = b/k + 1 - ((a-1)/k + 1) = b/k - (a-1)/k
    
    int a;
    int b;
    int k;
    
    cin >> a >> b >> k;
    
    int deljiviDoB = b/k + 1;
    int deljiviDoA = (a-1)/k + 1;
    
    if (a > 0)
        cout << deljiviDoB - deljiviDoA << endl;
    else
        cout << deljiviDoB << endl;
    
    return 0;
}
