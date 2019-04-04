//
//  main.cpp
//  1074
//
//  Created by 강시온 on 02/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;
int power2(int k){
    return (1 << k);
}

int go(int n, int x, int y){
    if (n==1){
        return 2*x+y;
    }
    else{
        if(x < power2(n-1)){
            if(y < power2(n-1)){
                return go(n-1,x,y);
            }
            else{
                return go(n-1,x,y-power2(n-1))+power2(2*n-2);
            }
        }
        else{
            if(y < power2(n-1)){
                return go(n-1,x-power2(n-1),y)+power2(2*n-2)*2;
            }
            else{
                return go(n-1,x-power2(n-1),y-power2(n-1))+power2(2*n-2)*3;
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    int n, r ,c;
    cin >> n >> r >> c;
    printf("%d",go(n,r,c));
}
