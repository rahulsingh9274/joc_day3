#include <stdio.h>

int countDigit(long long n)
{
    int sum=0, count = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
        ++count;
    }
    return sum+count;
}

int main()
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("sum of digits : %d \n", countDigit(n));
    return 0;
}