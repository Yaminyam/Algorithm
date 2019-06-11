//
//  main.cpp
//  2475
//
//  Created by 강시온 on 24/05/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i]*arr[i];
    }
    printf("%d",sum%10);
}

