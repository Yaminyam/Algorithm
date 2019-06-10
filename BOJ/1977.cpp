//
//  main.cpp
//  1977
//
//  Created by 강시온 on 24/05/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    int num[100];
    scanf("%d %d",&n, &m);
    for(int i=0;i<100;i++) {
        num[i] = (i+1)*(i+1);
    }
    int sum=0;
    int minnum=0;
    for(int i=n;i<=m;i++) {
        for(int j=0;j<100;j++) {
            if(i == num[j]) {
                sum += i;
                if(minnum == 0) {
                    minnum = i;
                }
            }
        }
    }
    if(!sum) {
        printf("-1");
        return 0;
    }
    printf("%d\n%d",sum,minnum);
}
