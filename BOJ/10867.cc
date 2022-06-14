#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int count[2001] = {
        0,
    };
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        count[a + 1000]++;
    }
    for (int i = 0; i < 2001; i++)
    {
        if (count[i] != 0)
            printf("%d ", i - 1000);
    }
}
