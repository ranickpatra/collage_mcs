#include <stdio.h>

// function which returns value of f(x)
double func(double x)
{
	return x*x*x - x*x + 2;
}

// function to get absolute value
double m_abs(double x)
{
	if(x < 0.0)
		x *= -1;
	return x;
}

// function which returns value of f'(x)
double derivFunc(double x)
{
	return 3*x*x - 2*x;
}

// Function to find the root
void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);

	while (m_abs(h) >= 0.001)
	{
		h = func(x)/derivFunc(x);
		x = x - h;
	}

	printf("The value of the root is : %lf\n", x);
}


int main()
{
	double x0 = -20; 
	newtonRaphson(x0);
	return 0;
}
