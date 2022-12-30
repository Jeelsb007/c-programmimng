
#include<stdio.h>
#include<conio.h>
main(){
       int a,b;
       clrscr();
       printf("enter value of a and b:");
       scanf("%d\n%d",&a,&b);
       a=a+b;
       b=a-b;
       a=a-b;




       printf("a:%d\nb:%d",a,b);
       getch();           }