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

int lower_bound(int target, int size);
int upper_bound(int target, int size);

vector<int> a;

int main()
{
    int n;
    scanf("%d",&n);
    a.push_back(987654321);
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
        printf("%d ",upper_bound(input, n+1) - lower_bound(input, n+1));
    }
}

int lower_bound(int target, int size)
{
    int mid, start, end;
    start = 0, end = size-1;
    
    while (end > start) // end가 start보다 같거나 작아지면, 그 값이 Lower Bound이므로 반복을 종료한다.
    {
        mid = (start + end) / 2;
        if (a[mid] >= target) // 중간값이 원하는 값보다 크거나 같을 경우, 끝값을 중간값으로 설정하여 다시 탐색한다.
            end = mid;
        else start = mid + 1; // 중간값이 원하는 값보다 작을 경우, 시작값을 중간값+1로 설정하여 다시 탐색한다.
    }
    return end;
}

int upper_bound(int target, int size)
{
    int mid, start, end;
    start = 0, end = size-1;
    
    while (end > start) // end가 start보다 같거나 작아지면, 그 값이 Upper Bound이므로 반복을 종료한다.
    {
        mid = (start + end) / 2;
        if (a[mid] > target) // 중간값이 원하는 값보다 클 경우, 끝값을 중간값으로 설정하여 다시 탐색한다.
            end = mid;
        else start = mid + 1; // 중간값이 원하는 값보다 작거나 같을 경우, 시작값을 중간값+1로 설정하여 다시 탐색한다.
    }
    return end;
}
