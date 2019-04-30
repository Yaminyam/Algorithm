//
//  main.cpp
//  1080
//
//  Created by 강시온 on 29/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int map[51][51];
int map2[51][51];
int ans;

void flip(int x, int y) {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            map[x+i][y+j] = 1-map[x+i][y+j];
        }
    }
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d",&map[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d",&map2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j] != map2[i][j]){
                ans++;
                flip(i,j);
            }
        }
    }
    
    for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            if(map[i][j] != map2[i][j]){
                printf("-1");
                return 0;
            }
        }
    }
    
    printf("%d",ans);
    return 0;
}
