#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],num,i=0,j,rem,rev=0;
    printf("\n Enter a number  :");
    scanf("%d",&num);
    printf("\n the new number is :");
    while(num!=0)
    {
        rem=num%10;
        arr[i]=rem+1;
        rev=rev*10+rem;
        i++;
        num=num/10;

    }

    for(j=i-1;j>=0;j--)
        printf("%d",arr[j]);
    return 0;
}