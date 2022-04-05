#include <stdio.h>

int nt(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, a, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a);
            if (j >= i && nt(a))
                s += a;
        }
    printf("%d\n", s);
    return 0;
}