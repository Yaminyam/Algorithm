#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5]={0,};
    int ansn=0;
    int ans=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            int x;
            cin >> x;
            arr[i]+=x;
        }
        if(arr[i]>ans){
            ansn = i+1;
            ans = arr[i];
        }
    }
    cout << ansn << " " << ans;
}
