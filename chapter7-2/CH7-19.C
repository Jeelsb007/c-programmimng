#include<stdio.h>
#include<conio.h>
main(){int i=1,n,fact=1;
printf("enter n:");
scanf("%d",&n);
clrscr();
do{
   printf("%d ",i);
   fact=fact*i;
   i++;

}while(i<=n);
printf("\n\nfact of %d values:%d",n,fact);
getch(); }