//elseif leadder

#include<stdio.h>
main()
{
              int num;
              printf("enter the number :");
              scanf("%d", &num);
              if(num>=90 && num <=100)
              {
                           printf("A grade");
              }
              else if(num>=80 && num<=90)
              {
                           printf("B grade");
              }
              else if(num>=70 && num<=80)
              {
                           printf("C grade");
              }
              else if(num>=60 && num<=70)
              {
                           printf("D grade");
              }
              else if(num>=50 && num<=60)
              {
                           printf("E grade");
              }
              else if(num>=35 && num<=50)
              {
                           printf("just pass");
              }
              else
              {
                           printf("you are fail");
              }
}




