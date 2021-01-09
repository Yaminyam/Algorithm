#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    int k;
    long long sum = 0;
    cin >> n >> k;
    int check = 1;
    while (check <= n) {
        sum += (n - check + 1);
        check *= 10;
    }
    if(k > sum){
        cout << "-1" << "\n";
        return 0;
    }
    int r = n;
    int l = 1;
    int ans=0;
    while(l <= r){
        int m = (l+r)/2;
        sum = 0;
        check = 1;
        while (check <= m) {
            sum += (m - check + 1);
            check *= 10;
        }
        if(sum>=k){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    string s = to_string(ans);
    long long level;
    sum = 0;
    check = 1;
    while (check <= ans) {
        sum += (ans - check + 1);
        check *= 10;
    }
    level = sum;
    cout << s[s.size() - (level - k) - 1] << '\n';
    
    /*
     for(int i=0;i<sum-k;i++){
        ans/=10;
    }
    cout << ans%10 << "\n";
    */
    
    
}
