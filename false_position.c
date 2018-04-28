#include<stdio.h>

#define MAX_ITER 1000000
 
double func(double x)
{
    return x*x*x - x*x + 2;
}
 

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        printf("You have not assumed right a and b\n");
        return;
    }
 
    double c = a;
 
    for (int i=0; i < MAX_ITER; i++)
    {

        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
 

        if (func(c)==0)
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
    regulaFalsi(a, b);
    return 0;
}