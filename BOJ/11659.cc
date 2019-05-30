//
//  main.cpp
//  11659
//
//  Created by 강시온 on 14/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

int main(){
    int n,m;
    int a,b;
    int input[100000];
    int sum[100000];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
    }
    sum[0] = input[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1] + input[i];
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",sum[b-1]-sum[a-1]+input[a-1]);
    }
}
