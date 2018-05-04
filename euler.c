#include <stdio.h>

double f(double x, double y)
{
	return x + y + x * y;
}


void euler(double x0, double y, double h, double x)
{
	while(x0 < x)
	{
		y += h * f(x0, y);
		x0 += h;
	}

	printf("%lf\n\n", y);
}

void main()
{
	euler(0, 1, 0.025, 0.1);
	
}
