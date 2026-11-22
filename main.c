#include <stdio.h>

void divmod(int x, int y, int *q, int *r)
{
    *q = x / y;
    *r = x % y;
}

int main(void)
{
    int g_x = 0;
    int g_y = 0;
    int g_quotient = 0;
    int g_remainder = 0;

    scanf("%d %d", &g_x, &g_y);
    if (g_x <= 0 || g_y <= 0)
    {
        printf("NG");
        return 0;
    }

    divmod(g_x, g_y, &g_quotient, &g_remainder);
    printf("%d,%d", g_quotient, g_remainder);

    return 0;
}
