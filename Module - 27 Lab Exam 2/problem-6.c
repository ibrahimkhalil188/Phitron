#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 3 == 0 || array[i] % 5 == 0)
        {
            count++;
        }
    }
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