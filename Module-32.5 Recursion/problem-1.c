#include <stdio.h>
int get_pow(int i, int n, int m)
{
    if (i == m)
        return 1;
    return n * get_pow(i + 1, n, m);
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int power = get_pow(0, n, m);
    printf("%d", power);
}