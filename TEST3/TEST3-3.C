#include<stdio.h>
#include<conio.h>
main(){
       int i=0,n;
       clrscr();
       printf("enter n=");
       scanf("%d",&n);
       while(n!=0){
	n=n/10;
	      i++;
       }
       printf("the number of digit:%d",i);
       getch();

}





