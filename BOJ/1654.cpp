//
//  main.cpp
//  1654
//
//  Created by 강시온 on 01/08/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    int line[10000];
    int maxnum;
    int ans=0;
    scanf("%d %d",&k, &n);
    for(int i=0;i<k;i++){
        scanf("%d",&line[i]);
        maxnum = max(maxnum,line[i]);
    }
    long long l = 1;
    long long r = maxnum;
    while(l <= r){
        int count = 0;
        long long m = (l+r)/2;
        for(int i=0;i<k;i++){
            count+=line[i]/m;
        }
        if(count >= n){
            if(ans < m){
                ans = m;
            }
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    printf("%d",ans);
}
