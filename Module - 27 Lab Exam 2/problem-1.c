#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int count_divided_three = count / 3;
        if (count_divided_three % 2 == 0)
        {
            array[i] = i + 1;
            count++;
        }
        else
        {
            array[i] = -(i + 1);
            count++;
        }
        sum += array[i];
    }
    printf("%d", sum);
    return 0;
}