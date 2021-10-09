#include <stdio.h>

int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n,x,y;
    printf("Enter a number: \n");
    scanf("%d", &n);
    x=getSum(n);
    y=getSum(x);
    printf("the sum of digits is  %d \n",x);
    printf("Single digit sum is %d ",y);
    return 0;
}