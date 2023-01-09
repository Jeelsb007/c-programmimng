#include<conio.h>
main(){
       int i=1,n,fact=1,sum=0;                                                                                                                                                                       ;
       clrscr();
       printf("ENTER VALUE OF n:");
       scanf("%d",&n);
       while(i<=n){
	 printf("%d\n",i);
	 fact=fact*1;
	 sum=sum+1;
	 i++;

       }
       printf("\n\n sum of %d values:%d",n,sum);
       printf("\n\n fact of %d values:%d",fact);
       getch();
}