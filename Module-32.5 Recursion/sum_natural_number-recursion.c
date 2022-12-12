#include <stdio.h>
int get_sum(int i, int n)
{
    if (i <= n)
        return i + get_sum(i + 1, n);
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum = get_sum(1, n);
    printf("%d", sum);
}