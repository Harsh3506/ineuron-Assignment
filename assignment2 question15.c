#include<stdio.h>
int main(){
int a;
printf("enter:");
scanf("%d",&a);

if(a>0)
    {
    printf("number is positive");
    }
else
    {
        if(a<0)
        {
        printf("number is negative" );
        }

        else
          {
            if(a==0)
            {
            printf("number is 0");
            }

          }
      }

      return 0;
      }
