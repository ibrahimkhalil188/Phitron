#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (count % 2 != 0)
        {
            for (int k = 0; k < 3; k++)
            {
                array[index] = index + 1;
                index++;
            }
        }
        }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}