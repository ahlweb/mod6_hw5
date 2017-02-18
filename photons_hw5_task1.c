/*
 * =====================================================================================
 *
 *       Filename:  photons_hw5_task1.c
 *       	Usage:  ./photons_hw5_task1.c
 *    Description:  Sterling photons_hw5_task1.c
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:58 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sterling Woodruff (), sterlingwoodruff@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <math.h>		/* Math Library */

/* Function Prototypes */
float AnnulusMoment(float r1, float r2);
/* Main Program */
int main (void)
{
	float r1, r2;

	printf("Enter the value for outer radius (r2): ");
	scanf("%f", &r2);
	printf("Enter the value for inner radius (r1): ");
	scanf("%f", &r1);
	AnnulusMoment(r1, r2);

	return 0;
}


/* Function Defenitions */
float AnnulusMoment(float r1, float r2)
{
	float inertia;
	inertia = 3.14159/4 * (pow(r2, 4) - pow(r1, 4));;
	printf("The second moment of inertia is %.2f\n", inertia);
	
	return inertia;
}

