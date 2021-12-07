#include <stdlib.h>
#include <bits/stdc++.h>

int fib(int b)
{
    if (b <= 1)
    {
        return b;
    }
    return fib(b - 1) + fib(b - 2);
}

void printfib(int b)
{
    for (int n = 1; n <= b; n++)
    {
        printf("[%d]", fib(n));
    }
}

int main()
{
    int m;

    printf("Digite a posicao da sequencia que deseja consultar: ");
    scanf("%d", &m);

    printfib(m);

    //printf("[%d]", fib(ms));
}