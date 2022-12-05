#include <stdio.h>
int divisible_by_three(int n, int array[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 3 == 0 && array[i] % 5 != 0)
        {
            count++;
        }
    }
    return count;
}
int divisible_by_five(int n, int array[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 5 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int number_of_three = divisible_by_three(n, array);
    int number_of_five = divisible_by_five(n, array);
    count = number_of_five + number_of_three;
    if (count > 0)
    {
        printf("%d", count);
    }
    else
    {
        printf("-1");
    }
    return 0;
}