#include <stdio.h>
int get_1_N(int i, int n)
{
    printf("%d ", i);
    if (i < n)
        return get_1_N(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    get_1_N(1, n);
}