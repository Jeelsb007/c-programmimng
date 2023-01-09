#include<stdio.h>
#include<conio.h>
main(){
       int i=1,n;                                                                                                                                                                       ;
       clrscr();
       printf("ENTER VALUE OF n:");
       scanf("%d",&n);
       while(i<=n){
       if(i%2==1)
	 printf("%d\n",i,n);
	 i++;

       }
       getch();
}