//
//  main.cpp
//  1201
//
//  Created by 강시온 on 29/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    if (m+k-1 <= n && n <= m*k) {
        for (int i=0; i<n; i++) {
            a[i] = i+1;
        }
        int g1 = k;
        int g0 = 0;
        reverse(a.begin() + g0, a.begin()+g1);
        n -= k;
        m -= 1;
        int gs = m == 0 ? 1 : n/m;
        int r = m == 0 ? 0 : n%m;
        for (int i=0; i<m; i++) {
            g0 = g1;
            g1 += gs + (r > 0 ? 1 : 0);
            if (r > 0) {
                r -= 1;
            }
            reverse(a.begin()+g0, a.begin()+g1);
        }
        
        for (int i=0; i<a.size(); i++) {
            printf("%d ",a[i]);
        }
    } else {
        printf("-1");
    }
    return 0;
}
