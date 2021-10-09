#include <stdio.h>

void printDigit(long long n)
{
    int r;
    if (n == 0)
    {
        return ;
    }
    r = n % 10;
    printDigit(n / 10);
    printf("%d ", r);
}
 
int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}


int main()
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("Number of digits : %d \n", countDigit(n));
    printDigit(n);
    return 0;
}