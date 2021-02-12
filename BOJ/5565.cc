#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int sum =0;
    cin >> sum;
    for(int i=0;i<9;i++){
        int x;
        cin >> x;
        sum -= x;
    }
    cout << sum;
}
