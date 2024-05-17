#include <stdio.h>

int power(int n, int m)
{
    int i, res;
    i = 0; res = 1;
    
    //invariant: res == n^i && i <= m
    while (i < m) {
        res *= n;
        i++;
    } // post-loop: i == m;
    return res;
}

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", power(n, m));
    return 0;
}
