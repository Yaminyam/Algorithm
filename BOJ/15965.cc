#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    int N = 10000000;
    int a;
    int count=0;
    scanf("%d",&a);
    vector<bool> arr(N+1);
    for (int i = 2; i <= sqrt(N); i++) {
        if (arr[i] == true)
            continue;
        for (int j = i + i; j <= N; j += i) {
            arr[j] = true;
        }
    }
    for (int i = 2; i <= N; i++) {
        if (arr[i] == false)
            count++;
        if(count==a){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
