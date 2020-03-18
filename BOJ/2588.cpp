//
//  main.cpp
//  2588
//
//  Created by 강시온 on 01/08/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int a1,a2[3];
    scanf("%d",&a1);
    for(int i=0;i<3;i++){
        scanf("%1d",&a2[i]);
    }
    for(int i=0;i<3;i++){
        printf("%d\n",a1*a2[2-i]);
    }
    printf("%d",a2[0]*a1*100+a2[1]*a1*10+a2[2]*a1);
}
