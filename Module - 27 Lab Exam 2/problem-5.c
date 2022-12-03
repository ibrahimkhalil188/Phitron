#include <stdio.h>
int get_odd_even_sum(int n, int array[])
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && array[i] % 2 == 0)
        {
            sum += (i + array[i]);
            printf("even= %d %d \n", i, array[i]);
        }
        else if (i % 2 != 0 && array[i] % 2 != 0)
        {
            sum += (i + array[i]);
            printf("Odd= %d %d \n", i, array[i]);
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d", get_odd_even_sum(n, array));
}