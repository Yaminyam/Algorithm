//
//  main.cpp
//  2447
//
//  Created by 강시온 on 02/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int map[2500][2500];

void solve(int x, int y, int n);

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    solve(0,0,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j] == 1)printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

void solve(int x, int y, int n){
    int m = n/3;
    if(m == 0)return;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == 1 && j == 1){
                for(int k=0;k<m;k++){
                    for(int l=0;l<m;l++){
                        map[x + i*m + k][y + j*m + l]=1;
                    }
                }
            }
            else{
                solve(x + i*m, y + j*m, m);
            }
        }
    }
}
