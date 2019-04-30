//
//  main.cpp
//  15779
//
//  Created by 강시온 on 29/04/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int a[5001];
    cin >> n;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int result = 2;
    for(int i=0;i<n-1;i++) {
        int check;
        int count = 2;
        if(a[i]>a[i+1])
            check = 1;
        else
            check = 0;
        for(int j=i+1;j<n-1;j++) {
            if(check) {
                if(a[j] < a[j+1]){
                    count++;
                    check = 0;
                }
                else
                    break;
            } else {
                if(a[j] > a[j+1]){
                    count++;
                    check = 1;
                }
                else
                    break;
            }
        }
        if(count > result)result = count;
    }
    printf("%d",result);
}
