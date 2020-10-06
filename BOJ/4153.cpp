#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    while (1)
    {
        int a[3];
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        sort(a, a + 3);
        if (a[0] == 0 && a[1] == 0 && a[2] == 0)
        {
            break;
        }
        if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
            printf("right\n");
        else
        {
            printf("wrong\n");
        }
    }
}
