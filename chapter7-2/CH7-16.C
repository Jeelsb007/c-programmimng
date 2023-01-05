#include<stdio.h>
#include<conio.h>
main(){int n;
clrscr();
printf("enter n:");
scanf("%d",&n);
do{
if(n%2==0)
   printf("%d ",n);
   n--;

}while(n>=1);
getch();






}