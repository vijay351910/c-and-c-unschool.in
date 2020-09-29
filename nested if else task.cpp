#include <stdio.h>
int main()
{
float percentage=0.0;
printf("Enter your percentage");
scanf("%f",&percentage);
if(percentage >=80 && percentage <=100)
   {
     printf("grade A") ;
   }
else if ( percentage<80 && percentage >=70)
{
    printf("Grade B");
}
else if (percentage<70 && percentage>=60)
         {
             printf("Grade C");
         }
else if (percentage<60 && percentage>=45)
{
    printf("Grade D");
}
else if (percentage<45 && percentage>0)
{
    printf("FAIL");
}
else
{
    printf("Enter valid percentage!");
}
return 0;
}
