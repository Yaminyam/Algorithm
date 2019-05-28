//
//  main.cpp
//  1201
//
//  Created by 강시온 on 02/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int divn(int low, int high, int input);

vector<int> a;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int input;
        scanf("%d",&input);
        a.push_back(input);
    }
    sort(a.begin(),a.end());
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int input;
        scanf("%d",&input);
        printf("%d ",divn(0,n-1,input));
    }
}

int divn(int low, int high, int input)
{
    int mid;
    if (low > high)return 0;
    else {
        mid = (low + high) / 2;
        if (input == a[mid])
            return 1;
        else if (input < a[mid])
            return divn(low, mid - 1, input);
        else if (input > a[mid])
            return divn(mid + 1, high, input);
    }
    return -1;
}
