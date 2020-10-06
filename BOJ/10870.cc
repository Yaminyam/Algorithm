#include<iostream>

using namespace std;

int main()
{
    int a;
    long long pibo[91];
    pibo[0] = 0;
    pibo[1] = 1;
    for (int i = 2; i < 91; i++)
    {
        pibo[i] = pibo[i - 1] + pibo[i - 2];
    }
    scanf("%d", &a);
    printf("%lld", pibo[a]);
}
