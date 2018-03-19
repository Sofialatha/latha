#include <stdio.h>
int main()
{
    int n, i;
     printf("Enter an integer: ");
    scanf("%d",&n);
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
