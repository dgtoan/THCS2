#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10005];
        scanf("\n");
        gets(s);
        int n = strlen(s),
            k[10005] = {0};
        for (int i = 0; i < n; i++)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
                s[i] += 32;
            if (s[i] != ' ' || (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0'))
                k[i] = 1;
            if ((i == 0 || s[i-1] == ' ') && s[i] != ' ')
                s[i] -= 32;
        }
        for (int i = 0; i < n; i++)
            if (k[i]) printf("%c", s[i]);
        printf("\n");
    }
    return 0;
}
