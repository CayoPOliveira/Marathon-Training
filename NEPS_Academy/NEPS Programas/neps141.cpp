#include <stdio.h>

int main()
{
    int a, b, area;
    scanf("%d", &a);
    b=a/60;
    area=a%60;
    printf("%d\n%d", b, area);
    return 0;
}
