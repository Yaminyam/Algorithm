//
//  main.cpp
//  3052
//
//  Created by 강시온 on 01/08/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int check[42]={0,};

int main(int argc, const char * argv[]) {
    int count = 0;
    int n;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        check[n%42]++;
    }
    for(int i=0;i<42;i++){
        if(check[i%42]){
            count++;
        }
    }
    printf("%d",count);
}
