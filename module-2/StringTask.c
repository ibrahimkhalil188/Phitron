#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    scanf("%s", ch);
    char ch_new[100];
    int index_new = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        strlwr(ch);
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'y')
        {
            continue;
        }
        else
        {
            ch_new[index_new] = ch[i];
            index_new++;
        }
    }
    ch_new[index_new] = '\0';
    for (int i = 0; i < strlen(ch_new); i++)
    {
        printf(".%c", ch_new[i]);
    }
}