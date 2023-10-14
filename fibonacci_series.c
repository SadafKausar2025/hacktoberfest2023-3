#include <stdio.h>

int Iterative_fib(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int Rfib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return Rfib(n - 2) + Rfib(n - 1);
}
int main()
{
    int fib = Iterative_fib(7);
    int rfib = Rfib(7);
    printf("Itretively : %d \n", fib);
    printf("Recursively : %d ", rfib);

    return 0;
}
