#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m=10,n=4;
    float x=4.0,y=2.0;
    scanf("%d %d",&m, &n);
    scanf("%f %f",&x, &y);
    printf("%d ", m+n);
    printf("%d\n", m-n);
    printf("%.1f ", x+y);
    printf("%.1f\n", x-y);
    return 0;
}
