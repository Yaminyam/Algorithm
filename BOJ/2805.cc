//
//  main.cpp
//  2805
//
//  Created by 강시온 on 11/10/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,m;
    scanf("%d %d",&n,&m);
    int tree[1000000];
    for(int i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    int left,right;
    left = 0;
    right = 1000000000;
    long long sum=0;
    int mid=0;
    int ans=0;
    while(left <= right){
        mid = (left+right)/2;
        sum = 0;
        for(int i=0;i<n;i++){
            if(tree[i]-mid > 0)
                sum += tree[i]-mid;
        }
        if(sum < m) right = mid-1;
        else if(sum >= m){
            ans = max(ans,mid);
            left = mid+1;
        }
    }
    printf("%d",ans);
}
