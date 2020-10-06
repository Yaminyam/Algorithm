#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;
    int map[1001][1001];
    int dp[1001][1001];
    cin >> a >> b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++){
            cin >> map[i][j];
        }
    }
    dp[0][0] = map[0][0];
    for(int i=1;i<a;i++){
        dp[i][0] = dp[i-1][0] + map[i][0];
    }
    for(int i=1;i<b;i++){
        dp[0][i] = dp[0][i-1] + map[0][i];
    }
    
    for(int i=1;i<a;i++)
    {
        for(int j=1;j<b;j++){
            dp[i][j] = max(dp[i-1][j-1],max(dp[i-1][j], dp[i][j-1])) + map[i][j];
        }
    }
    
    cout << dp[a-1][b-1];
}
