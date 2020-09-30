#include <stdio.h>
int main()
{
int number=0,sum=0;
do
{
    printf("Enter a number");
    scanf("%d",&number);
    sum=sum+number;
}
while(number!=0);
printf("Sum: %d",sum);
return 0;
}
