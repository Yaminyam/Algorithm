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

int main()
{
    int t;
    int n;
    int casenumber=1;
    string input;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        cin >> input;
        int size=input.size();
        for(int i=0;i<size;i++){
            if(input[i]=='S')
                input[i]='E';
            else
                input[i]='S';
        }
        cout << "Case #" << casenumber++ << ": " << input << "\n";
    }
}
