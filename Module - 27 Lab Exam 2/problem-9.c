#include <stdio.h>
int get_prime(int n, int array[])
{
    int prime = 0;
    for (int i = 0; i < n; i++)
    {
        int value = *(array + i);
        int flag = 0;
        for (int j = 2; j < value; j++)
        {
            if (value % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            prime++;
    }
    return prime;
}
int get_even_average(int n, int array[])
{
    int sum = 0;
    int even_element = 0;
    for (int i = 0; i < n; i++)
    {
        int value = *(array + i);
        if (value % 2 == 0)
        {
            sum += value;
            even_element++;
        }
    }
    return sum / even_element;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d\n", get_prime(n, array));
    printf("%d\n", get_even_average(n, array));
    return 0;
}