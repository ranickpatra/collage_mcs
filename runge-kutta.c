#include <stdio.h>

double d_func(double x, double y)
{
    return (x - y) / 2;
}


void main()
{

    double x0=0.0, x=2.0, y=1, h=0.2;
    double k1, k2, k3, k4;
    int i;


    
    for(i = (int)(x - x0) / h; i>0; i--)
    {
		k1 = h * d_func(x0, y);
		k2 = h * d_func(x0 + 0.5 * h, y + 0.5 * k1);
		k3 = h * d_func(x0 + 0.5 * h, y + 0.5 * k2);
		k4 = h * d_func(x0 + h, y + k3);
		y += (k1 + 2*k2 + 2*k3 + k4) / 6;
		x0 += h;
    }

    printf("%lf\n\n", y);



}
