#include <stdio.h>

#define STEP 0.025

double f(double x, double y)
{
    return x + y + x * y;
}


double euler(double x0, double y, double x)
{
    if(x0 >= x)
	return y;
    return  euler(x0 + STEP,  y + STEP * f(x0, y), x);


}

void main()
{
    printf("%lf\n", euler(0, 1, 0.1));

}
