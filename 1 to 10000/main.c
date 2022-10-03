#include <stdio.h>
int main()
/*{
    int n;
    int i=1;
    int sum=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);


    while (i <= n)
    {
        sum=sum+i;
        i=i+1;
    }

    printf("Sum = %d", sum);
    return 0;
}
*/


{
int n=1;
int sum=0;
for(;n<=10000;n=n+1)
    sum=sum+n;
    printf("%d",sum);
return 0;
}


