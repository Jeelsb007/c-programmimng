#include<stdio.h>
#include<conio.h>
main(){int i=1,n,sum=0;
printf("enter n:");
scanf("%d",&n);
clrscr();
do{
   printf("%d ",i);
   sum=sum+i;
   i++;

}while(i<=n);
printf("\n\nsum of values:%d",sum);
getch();






}