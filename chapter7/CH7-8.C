#include<stdio.h>
#include<conio.h>
main(){
       int i=1,n,sum=0;                                                                                                                                                                       ;
       clrscr();
       printf("ENTER VALUE OF n:");
       scanf("%d",&n);
       while(i<=n){
	 printf("%d\n",i);
	 sum=sum+i;
	 i++;

       }
       printf("\n\n sum of %d values:%d",n,sum);
       getch();
}