/* Read a Natural Number and check whether the number is prime or not */

#include<stdio.h>

void main()
{
	int num, flag=0;
	printf("\n Enter the number: ");
    scanf("%d",&num);  
    if(num==1)
        printf("\n Number is neither Prime nor Composite");
    else{ 
	    for(int i=2;i<num/2;i++){ 
	        if(num%i==0){
                flag=1;
                break;
		    }
        }
    }
    if(flag == 1)
		printf(" \n Number is NOT PRIME! \n");
  	else
        printf(" \n Number is Prime. \n");
}
