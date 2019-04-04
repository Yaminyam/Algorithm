//
//  main.cpp
//  1780
//
//  Created by 강시온 on 02/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

void solve(int x, int y, int n);
bool same(int x, int y, int n);

int a[2500][2500];
int cnt[3];

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    solve(0, 0, n);
    for(int i=0;i<3;i++){
        printf("%d\n",cnt[i]);
    }
}

void solve(int x, int y, int n){
    if (same(x, y, n)){
        cnt[a[x][y]+1] += 1;
        return;
    }
    int m = n/3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            solve(x+i*m, y+j*m, m);
        }
    }
}

bool same(int x, int y, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[x][y] != a[x+i][y+j]){
                return false;
            }
        }
    }
    return true;
}
