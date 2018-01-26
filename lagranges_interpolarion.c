#include <stdio.h>

int main()
{

  int i, j, n;
  float arr_x[20], arr_y[20], x, y, temp;

  printf("Enter n: \n");
  scanf("%d", &n);
  printf("Enter x series:\n");
  for(i=0; i<n; i++)
    scanf("%f", &arr_x[i]);

  printf("Enter y series:\n");
  for(i=0; i<n; i++)
    scanf("%f", &arr_y[i]);

  printf("Enter x: ");
  scanf("%f", &x);

  y = 0;

  for(i=0; i<n; i++)
  {

    temp = 1;
    for(j=0; j<n; j++)
    {
      if(j != i) {
        temp *= (x - arr_x[j]) / (arr_x[i] - arr_x[j]);
      }

    }
    
    y += (temp * arr_y[i]);

  }

  printf("f(x) = %f\n", y);




}
