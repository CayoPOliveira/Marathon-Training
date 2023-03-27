#include <stdio.h>

int main()
{
    int a, b, area;
    scanf("%d%d", &a, &b);
    area=a + b;
    if(area>50) printf("N");
    else printf("S");
    return 0;
}
