#include<stdio.h>
#include<conio.h>
main(){ int a,b,c,d,M;
	float per;
	char grade;
	clrscr();
	printf("\n\tstudent name: ");
	printf("\n\tstandard: ");
	printf("\n\tsub\tmarks\tachieved marks");
	printf("\n\tMATHS\t100\t%d",a);
	scanf("%d",&a);
	printf("\n\tPHY\t100\t%d",b);
	scanf("%d",&b);
	printf("\n\tCHEM\t100\t%d",c);
	scanf("%d",&c);
	printf("\n\tENG\t100\t%d",d);
	scanf("%d",&d);
	M=a+b+c+d;
	printf("\n\tTOT\t400\t%d",M);
	per=M/4;
	printf("\n\tPER:%f",per);
	printf("\n\tGRADE:%c",grade);
	if(per<=100 && per>=90){
			       printf("\n\t your grade is A.");
	}
	else if(per<=89 && per>=80){
			      printf("\n\t your grade is B.");
	}
	else if(per<=79 && per>=70){
			       printf("\n\t your grade is C.");
	}
	else if(per<=69 && per>=60){
			       printf("\n\t your grade is D.");
	}
		else if(per<=59 && per>=50){
			       printf("\n\t your grade is E.");
	}
	else {
			    printf("you are fail.");
	}






getch();
}