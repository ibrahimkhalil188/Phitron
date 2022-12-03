#include <stdio.h>
#include <string.h>
int sort_descending(char *str)
{
    int max_ch = str[0] - 96;
    for (int j = 0; j < strlen(str); j++)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] < str[i + 1])
            {
                int temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            }
        }
    }
}
int main()
{
    char str[100];
    scanf("%s", &str);
    sort_descending(str);
    printf("%s", str);
    return 0;
}