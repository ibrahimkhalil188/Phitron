#include <stdio.h>
#include <math.h>
void beautiful_array(int n, int array[])
{
    int count_seven = 0;
    for (int i = 0; i < n; i++)
    {
        int value = *(array + i);
        while (value > 0)
        {
            if (value % 10 == 7)
            {
                count_seven++;
            }
            value = value / 10;
        }
    }
    int half_of_array_size = ceil(n / 2);
    if (half_of_array_size <= count_seven)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
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
    beautiful_array(n, array);
    return 0;
}