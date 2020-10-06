#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        long long ans=1;
        for(int i=0;i<b;i++){
            ans *= a;
            ans %= 10;
        }
        if(ans == 0)ans=10;
        cout << ans << "\n";
    }
}
