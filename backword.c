#include <stdio.h>

int main()
{
	int ax[10], i, j, n, x;
	float ay[10][10], p, nr=1, dr=1, yp;

	printf("Enter n: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("Enter the value of x%d\t:", i);
		scanf("%d", &ax[i]);
	}

	for(i=0; i<n; i++)
	{
		printf("Enter the value of y%d\t:", i);
		scanf("%f", &ay[i][0]);
	}

	for(j=1; j<n; j++)
	{
		for(i=j; i<n; i++)
		{
			ay[i][j] = ay[i][j-1] - ay[i-1][j-1];
		}
	}

	for(i=0; i<n; i++)
	{
		printf("%d\t", ax[i]);
		for(j=0; j<=i; j++)
		{
			printf("%.2f\t", ay[i][j]);
		}
		printf("\n");
	}

	printf("Enter the value of x to be found\n");
	scanf("%d", &x);
	//printf("x is: %d\n", x);
	i=0;
	for (i=0; ax[i] <= x; i++) {
		;
	}
	i--;

	p = (x - ax[i]) / ((float)(ax[1] - ax[0]));
	yp = ay[i][0];

	//printf("i=%d\n", i);
	for(j=1;j<=i; j++)
	{
		nr *= p+j-1;
		dr *= j;
		yp += nr*ay[i][j]/dr;
	}

	printf("\nY is: %f\n", yp);


	return 0;

}
