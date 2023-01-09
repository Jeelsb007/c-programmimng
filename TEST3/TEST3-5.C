#include<stdio.h>
#include<conio.h>
main(){
       int n,i=1,fact=1;
       clrscr();
       printf("enter n=");
       scanf("%d",&n);
       while(i<=n){
	fact=fact*i;
	i++;

       }
       printf("factorial of your number:%d",fact);
 getch();

}