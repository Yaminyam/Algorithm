//
//  main.cpp
//  1712
//
//  Created by 강시온 on 30/08/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c;
    cin >> a >> b >> c;
    int i = -1;
    if(b<c){
        i = a/(c-b)+1;
    }
    printf("%d",i);
}
