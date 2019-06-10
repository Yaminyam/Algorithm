//
//  main.cpp
//  2263
//
//  Created by 강시온 on 02/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int inorder[100000];
int postorder[100000];
int position[100001];
void solve(int in_start, int in_end, int post_start, int post_end){
    if(in_start > in_end || post_start > post_end)return;
    int root = postorder[post_end];
    printf("%d ",root);
    int p = position[root];
    
    solve(in_start, p-1, post_start, post_start + p - in_start - 1);
    solve(p+1,in_end,post_start + p - in_start,post_end-1);
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&inorder[i]);
    for(int i=0;i<n;i++) scanf("%d",&postorder[i]);
    for(int i=0;i<n;i++) position[inorder[i]] = i;
    solve(0,n-1,0,n-1);
}
