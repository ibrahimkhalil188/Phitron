#include <stdio.h>
int main()
{
    int n, k;
    int array[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &k);
    printf("%d", get_count(n, array, k));
}

int get_count(int n, int array[], int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != k)
        {
            count++;
        }
    }
    return count;
}