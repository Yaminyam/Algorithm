#include <vector>

long long sum(std::vector<int> &a) {
    long long sumnum = 0;
    for(int i=a.size();i--;){
        sumnum += a[i];
    }
    return sumnum;
}