#include<stdio.h>
#include<conio.h>
main(){int i=1,n;
printf("enter n:");
scanf("%d",&n);
clrscr();
do{
   printf("%d*%d=%d\n",n,i,n*i);
   i++;

}while(i<=10);
getch(); }