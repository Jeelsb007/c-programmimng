#include<stdio.h>
void div();

void main(){
	div();
}
void div(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	if(n%3==0 && n%5==0){
		printf("it can be divided by 3 and 5.");
	}
	else{
		printf("it can not be divided by 3 and 5.");
	}
}
