#include<stdio.h>
#include<conio.h>
main(){
       int n,reverse=0,rem;
       clrscr();
       printf("enter n=");
       scanf("%d",&n);
       while(n!=0){
	rem=n%10;
	reverse=reverse*10+rem;
		n=n/10;
       }
       printf("reverse of your number:%d",reverse);
if(reverse==n){
   printf("\nyour given number is pallindrome.");
}
else{
  printf("\nyour given number is not pallindrome.");
}
 getch();

}