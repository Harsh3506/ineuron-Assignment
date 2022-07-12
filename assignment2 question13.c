#include<stdio.h>
int main(){
int a;
printf("enter the value");
scanf("%d",&a);

if(a%3==0&&a%2==0)
    {
    printf("divisible by 3 and 2");
    }

else
    {
        if(a%2==0&&a%3!=0)
            {
               printf(" divisible by 2 not divisible by 3 ");
            }
       else
       {
        if(a%3==0&&a%2!=0)
               {
                   printf("divisible by 3 not by 2");
               }
       }
    }
return 0;
}
