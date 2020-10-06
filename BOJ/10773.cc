#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    int k;
    cin >> k;
    while(k--){
        int x;
        cin >> x;
        if(!x){
            s.pop();
        }
        else{
            s.push(x);
        }
    }
    int sum=0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
}
