#include <stdio.h>
int get_1_N(int i, int n)
{

    if (i <= n)
    {
        get_1_N(i + 1, n);
        printf("%d ", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    get_1_N(1, n);
}