/*
 * =====================================================================================
 *
 *       Filename:  photons_hw5_task2.c
 *       	Usage:  ./photons_hw5_task2.c
 *    Description: Adams task Miles to kilometers conversion  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:38:26 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Adam Lee (), Adamlee1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

float MakeMilesKmTable(float k);

/* Main Program */
int main(void)
{

	float inc, km;
	int end, miles;
	
	printf("Enter the starting miles: ");
	scanf("%d", &miles);

	printf("Enter the ending miles: ");
	scanf("%d", &end);

	printf("Enter the incraments: ");
	scanf("%f", &inc);

	printf("Miles  =   Kilometers\n");

	while (miles <= end)
	{

		km = MakeMilesKmTable(miles);
		printf("%3d        %5.2f\n", miles, km); 

		miles += inc;
	}




	return 0;


}


/* Function Defenitions */

float MakeMilesKmTable(float k)
{
float f;
f= k * 1.61;
return f;
}

