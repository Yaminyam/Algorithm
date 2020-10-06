#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000001];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int b,c;
    cin >> b >> c;
    long long ans=0;
    for(int i=0;i<n;i++){
        a[i]-=b;
        ans++;
        if(a[i]>0){
            ans += (a[i]-1)/c+1;
        }
    }
    cout << ans;
}
