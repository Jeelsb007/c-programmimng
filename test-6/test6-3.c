#include <stdio.h>
#include <string.h> 
int main()
{
    char a[50];  
    int  i,j=0;
     printf("Enter  the string : ");
    gets(a);
    
 
    for(i=0;a[i];i++)
    {
     	a[i]=a[i+j];
 
     	
     	if(a[i]==' '|| a[i]=='\t')
     	{
		  j++;
		  i--;
	    }
     	
    }
    printf("string after removing all blank spaces  :  ");
 
 	 printf("%s",a);
 	 
     
    
}
