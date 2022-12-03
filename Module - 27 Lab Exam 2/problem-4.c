#include <stdio.h>
int get_even(int n)
{
    if (n % 4 == 0)
    {
        for (int j = 0; j < 8; j += 2)
        {
            int num = (n / 4) - 4;
            if (num % 2 == 0)
            {
                printf("%d ", num + j);
            }
            else
            {
                printf("%d ", num + j + 1);
            }
        }
    }
    printf("\n");
}
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        get_even(n);
    }
}