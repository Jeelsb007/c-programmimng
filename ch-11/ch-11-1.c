#include<stdio.h>
void cube();

void main(){
	cube();
}
void cube(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	printf("cube:%d",n*n*n);
}
