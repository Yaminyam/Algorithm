#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    int ans;
    while(n--){
        a%=b;
        a*=10;
    }
    cout << a/b;
}
