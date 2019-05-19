//
//  main.cpp
//  15814
//
//  Created by 강시온 on 08/05/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        char temp;
        scanf("%d %d",&a,&b);
        temp = input[a];
        input[a] = input[b];
        input[b] = temp;
    }
    cout << input;
}
