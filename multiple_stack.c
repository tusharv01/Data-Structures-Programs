#include <stdio.h>
void push(int S[], int N, int M, int T[], int n, int x)
{
    if (T[n] == (n + 1) * ((M / N) - 1))
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        T[n]++;
        S[T[n]] = x;
        printf("Pushed Successfull\n");
    }
}
void pop(int S[], int N, int M, int T[], int n)
{
    if (T[n] == (n * (M / N)) - 1)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        T[n]--;
        printf("Popped Successfull\n");
    }
}
void Trav(int S[], int N, int M, int T[], int n)
{
    int m = T[n];
    if (T[n] == (n * (M / N)) - 1)
    {
        printf("Stack %d is empty", n);
    }
    for (int i = (n * (M / N)); i <= m; i++)
    {
        printf("%d\n", S[i]);
    }
}
int main()
{
    int M = 9, N = 3, S[M], T[(M / N) - 1];
    for (int i = 0; i < M / N; i++)
    {
        T[i] = (i * (M / N)) - 1;
    }
    pop(S, N, M, T, 0);
    push(S, N, M, T, 0, 23);
    push(S, N, M, T, 0, 53);
    push(S, N, M, T, 0, 43);
    pop(S, N, M, T, 0);
    push(S, N, M, T, 0, 93);
    push(S, N, M, T, 1, 100);
    push(S, N, M, T, 1, 200);
    Trav(S, N, M, T, 0);
    Trav(S, N, M, T, 1);
    return 0;
}