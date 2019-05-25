//
//  main.cpp
//  1026
//
//  Created by 강시온 on 24/05/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n;
    int input[100];
    int check[100];
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&input[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d",&check[i]);
    }
    sort(input, input+n);
    sort(check, check+n, greater<int>());
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=input[i]*check[i];
    }
    printf("%d",sum);
}
