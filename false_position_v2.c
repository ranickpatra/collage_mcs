#include<stdio.h>

#define MAX_ITER 100000
 
double func(double x)
{
    return x*x*x - x*x + 2;
}
 

double regulaFalsi(double a, double b)
{
    static double i;
    i++;
 
    double c = (a*func(b) - b*func(a))/ (func(b) - func(a));
    
    
    if(i == MAX_ITER)
    	return c;
    	
    
    return func(c) == 0 ? c : func(c) * func(a) < 0 ? regulaFalsi(a, c) : regulaFalsi(c, b);
  
    
}
 

int main()
{
    double a =-200, b = 300;
    
    if (func(a) * func(b) >= 0)
    {
        printf("You have not assumed right a and b\n");
        return 0;
    } else {
    
    	printf("\n\n%lf\n", regulaFalsi(a, b));
    
    }
    
    
    return 0;
}
