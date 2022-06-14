//
//  Main.cpp
//  codejam2019-1
//
//  Created by 강시온 on 06/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include<iostream>
#include<string>

using namespace std;

int check(int a,int b,int t){
    int reala=a;
    int realb=b;
    int count=1;
    while(a){
        if(a%10==4 || b%10==4){
            reala+=count;
            realb-=count;
        }
        a/=10;
        b/=10;
        count*=10;
    }
    printf("Case #%d: %d %d\n",t,reala,realb);
    return true;
}

int main()
{
    int t;
    int input;
    int number=1;
    int casenumber=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&input);
        if(input%2==0)
            check(input/2,input/2,casenumber++);
        else
            check(input/2+1,input/2,casenumber++);
    }
}
