#include <stdio.h>


int Factorial(int x) 
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int n, r;
    printf("enter the value of n and r\n");
    scanf("%d%d", &n, &r); // ncr= n!/r!*(n-r)!

    int ncr = Factorial(n) / (Factorial(r) * Factorial(n-r));
    printf("The permutation is %d\n", ncr); // 7,3=35
    return 0;
}