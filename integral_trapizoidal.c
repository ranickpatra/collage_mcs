#include <stdio.h>
#include <stdlib.h>


float f(float x) {
  return (4*x - 3*x*x);
}


int main() {


  int i, interval;
  float a, b, steps, sum=0, *y, integral;

  printf("Enter upper limit: ");
  scanf("%f", &a);
  printf("Enter lower limit: ");
  scanf("%f", &b);
  printf("Enter intervals: ");
  scanf("%d", &interval);


  y = (float *) malloc(sizeof(float) * (interval + 1));
  steps = (a - b) / interval;
  for (i = 0; i <= interval; i++)
    y[i] = f(b + i * steps);

  sum = y[0] + y[interval];
  for (i = 1; i < interval; i++)
    sum += 2*y[i];

  //integral = steps / 2 * (y[0] + y[interval]) + sum;
  integral = steps / 2 * sum;
  printf("%f\n", integral);


  return 0;

}
