#include<stdio.h>
int main(){

int a,b;
printf("enter the value:");
scanf("%d%d",&a,&b);

if(a==1&&a==3&&a==5&&a==7&&a==8&&a==10&&a==12)
               {
                printf("31 days");
               }

else
    {
        if(a==4&&a==6&&a==9&&a==11)
        {
        printf("30 days");
        }
     else
     {
        if(a==2)
            {
            if(b%400==0||b%100!=0&&b%4==0)
                {
                printf("29 days");
                }
            else
                {
                printf("28 days");
                }
             }

     }
     }

return 0;

}
