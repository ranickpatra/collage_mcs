#include <stdio.h>
#include <stdlib.h>


double fx(double x)
{
  
  return 3*x*x + 4*x;
}

int main()
{

  int i, interval;
  double *y, steps, upperLimit, lowerLimit, sum, integral;

  printf("Enter lower limit:");
  scanf("%lf", &lowerLimit);
  printf("Enter upper limit:");
  scanf("%lf", &upperLimit);
  printf("Enter intervals: ");
  scanf("%d", &interval);

  steps = (upperLimit - lowerLimit) / interval;
  y = (double *) malloc(sizeof(double) * (interval + 1));

  for(i = 0; i <= interval; i++ )
    y[i] = fx(lowerLimit + steps * i);
  sum = y[0] + y[interval];
  for (i = 1; i < interval; i++)
  {
    if (i%2)
      sum += 4 * y[i];
    else
      sum += 2 * y[i];
  }

  integral = sum * steps / 3;

  printf("%lf\n", integral);

  return 0;

}
