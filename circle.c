/* to read the radius of a circle, calculate its area and display it */

#include<stdio.h>

void main()
	{
		float rad, pi = 3.14;

		printf("\n Enter radius of Circle: ");
		scanf("%f", &rad);

		printf("\n Area of Circle = %.2f \n", rad*pi*rad);
	}
 
