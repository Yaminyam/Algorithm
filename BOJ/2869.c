#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);
    int result = ceil((c-a)/(a-b))+1;
    printf("%d",result);
}
