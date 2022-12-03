#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (i % 2 == 0)
        {
            printf("%c", ch[i]);
        }
        else
        {
            printf("%c", ch[i]);
            printf("%c", ch[i]);
        }
    }
}