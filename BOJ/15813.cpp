//
//  main.cpp
//  15813
//
//  Created by 강시온 on 08/05/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    int staff;
    int count=0;
    int check[1000001] = {0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&staff);
        for(int j = staff;j<1000001;j+=staff){
            check[j]++;
        }
    }
    for(int i=0;i<1000001;i++){
        if(check[i])count+=check[i];
        if(count>=m){
            printf("%d",i);
            break;
        }
    }
    
}
