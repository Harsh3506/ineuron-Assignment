#include<stdio.h>
int main(){

int a;
printf("enter:");
scanf("%d",&a);

if(a%7==0&&a%3!=0)
    {
        printf("divisible by 7");

    }
else
{
    if(a%7!=0&&a%3==0)
        {
        printf("divisible by 3");
        }


}

return 0;
}
