#include <stdio.h>
int get_digit_sum(int i, int n, int array[])
{
    if (i < n)
    {
        int value = array[i] % 10;
        int s = get_digit_sum(i + 1, n, array);
        return value + s;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int sum = get_digit_sum(0, n, array);
    printf("%d", sum);
}