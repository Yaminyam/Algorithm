//
//  main.cpp
//  1992
//
//  Created by 강시온 on 02/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int a[64][64];

bool same(int x, int y, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[x][y] != a[x+i][y+j])return false;
        }
    }
    return true;
}

void solve(int x, int y, int n){
    if(same(x,y,n)){
        printf("%d",a[x][y]);
        return;
    }
    printf("(");
    int m = n/2;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            solve(x + i*m, y + j*m, m);
        }
    }
    printf(")");
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",&a[i][j]);
        }
    }
    solve(0,0,n);
}
