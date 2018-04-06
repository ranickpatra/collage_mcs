#include<stdio.h>

#define EPSILON 0.01


double func(double x)
{
	return x*x*x - 9*x + 1;
}


void bisection(double a, double b)
{
	double c;
	if (func(a) * func(b) >= 0)
	{
		printf("You have not assumed right a and b\n");
		return;
	}

	c = a;
	while ((b-a) >= EPSILON)
	{
		
		c = (a+b)/2;
	
		if (func(c) == 0.0)
			break;

		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	printf("The value of root is : %lf\n", c);
}

int main()
{

	double a =-200, b = 300;
	bisection(2, 3);
	return 0;
}

