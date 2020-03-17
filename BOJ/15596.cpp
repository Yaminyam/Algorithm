//
//  main.cpp
//  15596
//
//  Created by 강시온 on 30/08/2019.
//  Copyright © 2019 강시온. All rights reserved.
//

#include <vector>

long long sum(std::vector<int> &a) {
    long long sumnum = 0;
    for(int i=a.size();i--;){
        sumnum += a[i];
    }
    return sumnum;
}
