// Zhan's Blender

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        
        if (n == 0) {
            cout << 0 << endl;
            continue;
        }
        
        long long blend_per_second = min(x, y);
        long long time_required = (n + blend_per_second - 1) / blend_per_second;
        
        cout << time_required << endl;
    }
    
    return 0;
}
