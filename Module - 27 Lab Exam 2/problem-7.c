#include <stdio.h>
void get_swap_array(int n, int array[], int query)
{
    int left = 0;
    int right = 0;
    for (int i = 0; i < query; i++)
    {
        scanf("%d%d", &left, &right);

        int temp = *(array + left);
        *(array + left) = *(array + right);
        *(array + right) = temp;
    }
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
    int number_of_query;
    scanf("%d", &number_of_query);
    get_swap_array(n, array, number_of_query);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
}